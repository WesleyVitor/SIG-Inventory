#include <stdio.h>
#include <stdlib.h>
#include "../Validacao/validacoes.h"
#include <ctype.h>
#include "./funcoesProduto.h"
#include "../TelasUteis/telas.h"
#include <string.h>
void tratarValidacaoNumeros(void){
  limparTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =       Digite apenas números         =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   Adicione um valor válido: ");
  
}


void tratarValidacaoNomeProduto(void){
  limparTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =       Digite apenas letras          =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   Adicione um nome válido: ");
  
}

void tratarValidacaoMarcaProduto(void){
  limparTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =       Digite apenas letras          =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   Adicione um marca válido: ");
  
}



char menuProduto(void){
  char opcao;
  limparTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =          Menu de Produtos           =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               1. Cadastrar um novo Produto                              ///\n");
  printf("///               2. Pesquisar dados sobre um Produto                       ///\n");
  printf("///               3. Apagar um Produto do sistema                           ///\n");
  printf("///               4. Atualizar dados de um Produto                          ///\n");
  printf("///               0. Volta para a tela anterior                             ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                    Entre com sua opção desejada:   ");
  scanf("%c",&opcao);
  getchar();
  printf("\n///            = = = = = = = = = = = = = = = = = = = =                      ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return opcao;
}

void tratarData(void){
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =            Data inválida!           =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("                  Nova data (dd/mm/aaaa): ");
}

//Função que irá cadastrar os clientes em arquivos binários.
int gravarDadosProduto(Produto* produto){
  FILE *arquivo;
  arquivo = fopen("Dados/Produto.dat","ab");
  if(arquivo == NULL){
    return 0;
  }
  fwrite(produto, sizeof(Produto),1, arquivo);
  fclose(arquivo);
  free(produto);
  return 1;
}

Produto* telaCadastroProduto(void){
  Produto* produto;
  produto = (Produto*) malloc(sizeof(Produto));
  //Variáveis de validação
  int statusScanfQuantidade;
  int statusScanfPreco;
  limparTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =       Cadastrar novo Produto        =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("                  Código do Produto:   ");
  scanf("%[^\n]",produto->codigoProd);
  getchar();
  while(!verificarDigitos(produto->codigoProd)){
    tratarValidacaoNumeros();
    scanf("%[^\n]",produto->codigoProd);
    getchar();
  }

  printf("                  Nome do Produto:   ");
  scanf("%[^\n]",produto->nomeProd);
  getchar();
  while(!validacaoString(produto->nomeProd)){
    tratarValidacaoNomeProduto();
    scanf("%[^\n]",produto->nomeProd);
    getchar();
  }

  printf("                  Marca do Produto:   ");
  scanf("%[^\n]",produto->marcaProd);
  getchar();
  while(!validacaoString(produto->marcaProd)){
    tratarValidacaoMarcaProduto();
    scanf("%[^\n]",produto->marcaProd);
    getchar();
  }

  printf("                  Quantidade do Produto:   ");
  statusScanfQuantidade = scanf("%d",&produto->quantidadeProd);
  getchar();
  //Criar uma função de validação de inteiro
  while(statusScanfQuantidade==0){
    tratarValidacaoNumeros();
    statusScanfQuantidade = scanf("%d",&produto->quantidadeProd);
    getchar();
  }

  printf("                  Preço da Unidade do Produto:   ");
  statusScanfPreco = scanf("%lf",&produto->precoUnitarioProd);
  getchar();
  while(statusScanfPreco==0){
    tratarValidacaoNumeros();
    statusScanfPreco = scanf("%lf",&produto->precoUnitarioProd);
    getchar();
  }

  printf("                  Descrição do Produto:   ");
  scanf("%[^\n]",produto->descricaoProd);
  getchar();
  produto->status = '1';
  printf("\n///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return produto;
}

void CadastroProduto(void){
  Produto* produto;
  int ocorreuGravacao;
  //Recebe um ponteiro com os dados de cliente.
  produto = telaCadastroProduto();

  //Gravar dados do cliente em arquivo.
  ocorreuGravacao = gravarDadosProduto(produto);
  if(!ocorreuGravacao){
    telaErroGravacaoArquivo();
  }else{
    telaConfirmarGravacaoArquivo();
  }

}

char* telaPesquisarProduto(void){
  char* codigoProd;
  limparTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               =     Procurar Produto no Sistema     =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///              Entre com o Código do produto a ser pesquisado             ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                    Código:   ");
  codigoProd = input();
  while(!verificarDigitos(codigoProd)){
    tratarValidacaoNumeros();
    codigoProd = input();
  }
  printf("\n///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return codigoProd;
}

void exibirProduto(Produto *produto){
  limparTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("                          Produto nº %s                                        \n", produto->codigoProd);
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///              Nome do Produto:       %s\n", produto->nomeProd);
  printf("///              Quantidade:            %d\n", produto->quantidadeProd);
  printf("///              Marca:                 %s\n", produto->marcaProd);
  printf("///              Preço Unitário (R$):   %.2lf\n", produto->precoUnitarioProd);
  printf("///              Descrição:             %s\n", produto->descricaoProd);
  printf("///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

Produto* buscarProduto(char *codigoProd){
  FILE *arquivo;
  Produto *produto;
  arquivo = fopen("Dados/Produto.dat","rb");
  if(arquivo==NULL){
    return NULL;
  }
  produto = (Produto*) malloc(sizeof(Produto));
  while(!feof(arquivo)){
    fread(produto, sizeof(Produto),1,arquivo);
    if((strcmp(produto->codigoProd,codigoProd)==0) && (produto->status=='1')){
      fclose(arquivo);
      return produto;
    }
  }
  fclose(arquivo);
  free(produto);
  return NULL;

}

void PesquisarProduto(void){
  Produto* produto;
  char* codigoProd;
  //Receber o código do produto digitado pelo cliente à ser procurado.
  codigoProd = telaPesquisarProduto();

  // Pegar o cliente que tem esse dado cadastrado.
  produto = buscarProduto(codigoProd);
  
  if(produto == NULL){
    telaFalhaBuscaDadoArquivo();
  }else{
    telaConfirmarBuscaDadoArquivo();
    //Exibir o produto selecionado.
    exibirProduto(produto);
  }

  
  
  //Desalocar memória.
  free(produto);
  free(codigoProd);
}

int regravarDadosProduto(Produto* produto){
  FILE* arquivo;
  Produto* produtoLido;
  int achou=0;
  arquivo = fopen("Dados/Produto.dat","r+b");
  if(arquivo == NULL){
    //Fazer tratamento
    fclose(arquivo);
    return 0;
  }
  produtoLido = (Produto*) malloc(sizeof(Produto));
  while(!feof(arquivo)){
    fread(produtoLido, sizeof(Produto),1,arquivo);
    if((strcmp(produto->codigoProd, produtoLido->codigoProd)==0) && (produtoLido->status=='1')){ 
      achou =1;
      produtoLido = produto;
      fseek(arquivo,-1*sizeof(Produto),SEEK_CUR);
      fwrite(produtoLido, sizeof(Produto),1,arquivo);
      break;
    }
  }
  fclose(arquivo);
  free(produtoLido);
  if(!achou){
    return 0;
  }else{
    return 1;
  }

}

int ApagarProduto(void){
  Produto* produto;
  char* codigoProd;
  int apagado;
  //Pegar o cnpj/cpf do cliente específico para atualizar
  codigoProd = telaPesquisarProduto();

  //Procurar Cliente.
  produto = buscarProduto(codigoProd);

  if(produto !=NULL){

    produto->status = '0';
    //Mandar Regravar os dados do cliente no arquivo.
    apagado = regravarDadosProduto(produto);
  }else{
    
    free(codigoProd);
    telaErroDeletarDadosArquivo();
    return 0;
  }

  //Desalocar Memória
  
  free(codigoProd);
  if(apagado == 1){
    telaConfirmarDeletarDadosArquivo();
    return 1;
  }else{
    telaErroDeletarDadosArquivo();
    return 0;
  }
}

// menu de Produto: informar código
// de produto para editar
void telaCodigoProduto(void){
  char codigoProd[15];
  limparTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =    Atualizar Produto no Sistema    =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///              Entre com o Código da produto a ser editada               ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                  Código:   ");
  scanf("%[^\n]", codigoProd);
  getchar();
  while(!verificarDigitos(codigoProd)){
    tratarValidacaoNumeros();
    scanf("%[^\n]", codigoProd);
    getchar();
  }
  //Criar função para verificar se produto existe na base de dados
  printf("///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

char telaMenuAtualizarProduto(void){
  char opcao;
  limparTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =    Atualizar Produto no Sistema     =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               Opções de Atualização Disponíveis:                        ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                a. Atualizar Nome                                        ///\n");
  printf("///                b. Atualizar Quantidade                                  ///\n");
  printf("///                c. Atualizar Preço da Unidade                            ///\n");
  printf("///                d. Atualizar Descrição                                   ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                  Entre com uma opção desejada de atualização:   ");
  scanf("%[a-d]",&opcao);
  getchar();
  printf("\n///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return opcao;
}

int AtualizarProduto(void){
  Produto* produto;
  char* codigoProd;
  char opcaoAtualizar;
  //Opções de atualização
  char* nomeProd;
  char* descricaoProd;
  int quantidadeProd;
  float precoProd;

  int atualizado = 0;
  //Pegar o cnpj/cpf do cliente específico para atualizar
  codigoProd = telaPesquisarProduto();

  

  //Procurar Cliente.
  produto = buscarProduto(codigoProd);

  if(produto !=NULL){
    //Pegar o campo a ser atualizado.
    opcaoAtualizar = telaMenuAtualizarProduto();
    //Pegar o valor do campo.
    if ((opcaoAtualizar == 'a' || opcaoAtualizar == 'A')){
      nomeProd =telaAddValor();
      strcpy(produto->nomeProd,nomeProd);
    } else if (opcaoAtualizar == 'b' || opcaoAtualizar == 'B'){
      quantidadeProd =addValorInt();
      produto->quantidadeProd = quantidadeProd;
    } else if (opcaoAtualizar == 'c' || opcaoAtualizar == 'C' ){
      precoProd =addValorFloat();
      produto->precoUnitarioProd = precoProd;
    } else if((opcaoAtualizar == 'd' || opcaoAtualizar == 'D')){
      descricaoProd =telaAddValor();
      strcpy(produto->descricaoProd,descricaoProd);
    }
    
    //Mandar Regravar os dados do cliente no arquivo.
    atualizado = regravarDadosProduto(produto);
  }else{
    free(codigoProd);
    telaErroAtualizarDadosArquivo();
    return 0;
  }

  //Desalocar Memória
  free(codigoProd);




  if(atualizado == 1){
    telaConfirmarAtualizarDadosArquivo();
    return 1;
  }else{
    telaErroAtualizarDadosArquivo();
    return 0;
  }
}

void navegacaoMenuProduto(void){
  char opcao;
  do{
    opcao = menuProduto();
    switch(opcao){
      case '1':
        CadastroProduto();
        break;
      case '2':
        PesquisarProduto();
        break;
      case '3':
        ApagarProduto();
        break;
      case '4':
        AtualizarProduto();
        
        break;
    }
  }while(opcao!='0');
}
