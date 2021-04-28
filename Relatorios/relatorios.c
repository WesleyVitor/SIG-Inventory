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
        telaRelatorioProdutos();
        break;
      case '3':
        telaRelatorioRetiradasTrimestrais();
        break;
      case '4':
        telaRelatorioFinanceiro();
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
  printf("///               3. Relatórios de Retiradas Trimestrais                    ///\n");
  printf("///               4. Relatórios Financeiros                                 ///\n");
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

void telaRelatoriosClientes(void){
  limparTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =  Relatórios de Clientes Cadastrados =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void telaRelatorioProdutos(void){
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
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void telaRelatorioRetiradasTrimestrais(void){
  int codigo = 244059;
  char produto[] = "Arroz";
  int quantidade = 500;
  char cpf[] = "015.231.561-76";
  float preco = 499.99;
  limparTela();
  for (int i = 0; i<10; i++){
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
    printf("///             =                                     =                     ///\n");
    printf("///             = Relatórios de Retiradas Trimestrais =                     ///\n");
    printf("                                 nº %d\n", i+1);
    printf("///             =                                     =                     ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Código: %d                                               ///\n", codigo);
    printf("///            Produto: %s                                               ///\n", produto);
    printf("///            Quantidade: %d                                              ///\n", quantidade);
    printf("///            CPF: %s                                          ///\n", cpf);
    printf("///            Preço (R$): %.2f                                           ///\n", preco);
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
  }
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void telaRelatorioFinanceiro(void){
  limparTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =        Relatórios Financeiros       =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
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