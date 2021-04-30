#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Validacao/validacoes.h"
#include "./relatorios.h"
#include "../Cliente/funcoesCliente.h"
void navegacaoMenuRelatorios(void){
  char opcao;
  do{
    opcao = menuRelatorios();
    switch(opcao){
      case '1':
        relatorioCliente();
        break;
      case '2':
        relatorioProduto();
        break;
    }
  }while(opcao!='0');
}

char menuRelatorios(void){
  char opcao;
  limparTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =           Menu de Relatórios        =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               1. Relatórios de Clientes Cadastrados Alfabeticamente     ///\n");
  printf("///               2. Relatórios de Produtos Cadastrados                     ///\n");
  printf("///               0. Voltar para tela anterior                              ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                      Entre com sua opção desejada:   ");
  scanf("%c", &opcao);
  getchar();
  printf("///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return opcao;
}

void exibirProdutos(ProdutoLista* prod){
  limparTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =  Relatórios de Produtos Cadastrados =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  while (prod != NULL){
    printf("    Código do produto:              %s\n", prod->codigoProd);
    printf("    Nome do produto:                %s\n", prod->nomeProd);
    printf("    Quantidade do produto:          %d\n", prod->quantidadeProd);
    printf("    Marca do produto:               %s\n", prod->marcaProd);
    printf("    Preço unitário (R$):            %.2lf\n", prod->precoUnitarioProd);
    printf("    Descrição do produto:           %s\n", prod->descricaoProd);
    printf("\n\n");
    prod = prod->prox;
  }
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void relatorioProduto(void){
  ProdutoLista* lista;
  lista = gerarRelatProd();
  exibirProdutos(lista);
}

//gera relatorio na ordem direta
ProdutoLista* gerarRelatProd(void){
  FILE* fp;
  ProdutoLista* produto;
  ProdutoLista* lista;
  ProdutoLista* anterior;
  lista = NULL;

  fp = fopen("Dados/Produto.dat", "rb");
  if (fp == NULL){
   printf("Erro na abertura do arquivo... \n");
   return NULL;
  }else{
    produto = (ProdutoLista*) malloc(sizeof(ProdutoLista));
    while (fread(produto, sizeof(ProdutoLista), 1, fp)){
      if (lista == NULL){
        lista = produto;
        anterior = produto;
      }else{
        anterior->prox = produto;
        anterior = produto;
      }
      produto = (ProdutoLista*) malloc(sizeof(ProdutoLista));
    }
    return lista;
  }
  free(produto);
  fclose(fp);
}

ClienteLista* gerarRelatorioCliente(){
    FILE *fp;
    ClienteLista *cliente;
    ClienteLista *lista;
    
    lista = NULL;
    fp = fopen("Dados/Clientes.dat","rb");
    if (fp == NULL){
   	 printf("Erro na abertura do arquivo... \n");
   	 return NULL;
    }
    else{
   	 cliente = (ClienteLista *) malloc(sizeof(ClienteLista));
   	 while (fread(cliente, sizeof(Cliente), 1, fp)){
        if ((lista == NULL) || (strcmp(cliente->nome, (lista)->nome) < 0)) {
          cliente->prox = lista;
          lista = cliente;
        } else  {
          ClienteLista* ant = lista;
          ClienteLista* atu = (lista)->prox;
          while ((atu != NULL) && (strcmp(atu->nome, cliente->nome) < 0)) {
            ant = atu;
            atu = atu->prox;
          }
          ant->prox = cliente;
          cliente->prox = atu;
        }
        cliente = (ClienteLista *) malloc(sizeof(ClienteLista));
   	 }
   	 free(cliente);
   	 fclose(fp);
    }  

    return lista;  
}

void relatorioCliente(){
  ClienteLista* lista;

  lista = gerarRelatorioCliente();

  exibirLista(lista);
  
}

void exibirLista(ClienteLista *aux){
  printf("\n\n");
  printf("****************************************\n");
	printf("*** Relatório dos Clientes Cadastrados ***\n");
  printf("****************************************\n");
  printf("\n");
	while (aux != NULL){
    	printf("Nome do cliente:       %s\n", aux->nome);
      printf("Rua:                   %s\n", aux->rua);
      printf("Bairo:                 %s\n", aux->bairro);
      printf("Número:                %s\n", aux->numero);
      printf("Complemento:           %s\n", aux->complemento);
      printf("\n\n");
    	aux = aux->prox;
	}
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}