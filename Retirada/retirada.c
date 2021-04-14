#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "retirada.h"
#include "../Validacao/validacoes.h"
#include "../TelasUteis/telas.h"


//funcao navegacaoMenuRetirada
void navegacaoMenuRetirada(void){
  char opcao;
  char tipoAtt;
  int status;
  char* codRetirada;
  Retirada *retirada;
  do{
    opcao = menuRetirada();
    switch(opcao){
      case '1':
        retirada = telaCadastroRetirada();

        // gravar os dados em arq. binário
        status = gravarDadosRetirada(retirada);
        if (!status){
          telaErroGravacaoArquivo();
        }else{
          telaConfirmarGravacaoArquivo();
        }
        free(retirada);
        break;
      case '2':
        codRetirada = telaPesquisarRetirada();
        retirada = pesquisarDadosRetirada(codRetirada);
        printf("Preço Unitario: %lf", retirada->precoUnitario);
        free(retirada);
        break;
      case '3':
        telaApagarRetirada();
        telaConfirmacao();
        break;
      case '4':
        telaCodigoRetirada();
        tipoAtt = telaAtualizarRetirada();
        if (tipoAtt == 'b' || tipoAtt == 'B'){
          addValorInt();
        } else if (tipoAtt == 'd' || tipoAtt == 'D'){
          addValorFloat();
        } else if (tipoAtt == 'a' || tipoAtt == 'A' ||
                   tipoAtt == 'c' || tipoAtt == 'C')
        {
          addValorString();
        }
        telaConfirmacao();
        break;
    }
  }while(opcao!='0');
}

void tratarValidacaoCNPJCPFRetirada(void){
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =     Seu CNPJ/CPF está incorreto     =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   Adicione um CNPJ/CPF válido: ");

}

void tratarValidacaoProdutoRetirada(void){
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =       Digite apenas o código        =                    ///\n");
  printf("///              =            do produto               =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   Adicione um Código de Produto válido: ");
  
}

void tratarValidacaoNumerosRetirada(void){
  system("clear");
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

void tratarValidacaoCodRetirada(void){
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =    Digite um código de 6 dígitos    =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               Adicione um valor válido: ");
}


// menu de Retirada
char menuRetirada(void){
  char opcao;
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =           Menu de Retirada          =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               1. Cadastrar uma nova Retirada                            ///\n");
  printf("///               2. Pesquisar dados sobre uma Retirada                     ///\n");
  printf("///               3. Apagar uma Retirada do sistema                         ///\n");
  printf("///               4. Atualizar dados de uma Retirada                        ///\n");
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

// menu de Retirada: submenu Cadastrar
Retirada* telaCadastroRetirada(void){
  Retirada *retirada;
  retirada = (Retirada*) malloc(sizeof(Retirada));

  //Variáveis de validação
  int statusScanfQuantidade;
  int statusScanfPreco;
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =       Cadastrar Nova Retirada       =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("                  Código da Retirada (6 dígitos):   ");
  scanf("%[^\n]", retirada->codigoRet);
  getchar();
  //verifica se eh digito
  while(!verificarDigitos(retirada->codigoRet)){
    tratarValidacaoNumerosRetirada();
    scanf("%[^\n]", retirada->codigoRet);
    getchar();
  }
  //verifica se tem 6 digitos
  while (!validarCodRetirada(retirada->codigoRet)){
    tratarValidacaoCodRetirada();
    scanf("%[^\n]", retirada->codigoRet);
    getchar();
  }
  printf("                  Código do Produto:   ");
  scanf("%[^\n]", retirada->codigoProd);
  getchar();
  while(!verificarDigitos(retirada->codigoProd)){
    tratarValidacaoProdutoRetirada();
    scanf("%[^\n]", retirada->codigoProd);
    getchar();
  }
  printf("                  Quantidade do Produto:   ");
  statusScanfQuantidade = scanf("%d", &retirada->quantidadeProd);
  getchar();
  while(statusScanfQuantidade==0){
    tratarValidacaoNumerosRetirada();
    statusScanfQuantidade = scanf("%d", &retirada->quantidadeProd);
    getchar();
  }
  printf("                  CPF/CNPJ do Cliente:   ");
  scanf("%[^\n]", retirada->cnpjCpfCliente);
  getchar();
  while(!validarCNPJ_CPF(retirada->cnpjCpfCliente)){
    tratarValidacaoCNPJCPFRetirada();
    scanf("%[^\n]", retirada->cnpjCpfCliente);
    getchar();
  }
  printf("                  Preço Unitário do Produto (R$):   ");
  statusScanfPreco = scanf("%lf", &retirada->precoUnitario);
  getchar();
  while(statusScanfPreco==0){
    tratarValidacaoNumerosRetirada();
    statusScanfPreco = scanf("%lf", &retirada->precoUnitario);
    getchar();
  }
  //Preço total da compra
  retirada->precoTotal = retirada->precoUnitario*retirada->quantidadeProd;
  retirada->status= '1';
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return retirada;
}

// menu de Retirada: submenu Pesquisar
char* telaPesquisarRetirada(void){
  char *codigoRet;
  codigoRet = (char*) malloc(6*sizeof(codigoRet));
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =         Pesquisar Retirada          =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///              Entre com o Código da Retirada a ser pesquisada            ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                  Código:   ");
  scanf("%[^\n]", codigoRet);
  getchar();
  while(!validarCodRetirada(codigoRet)){
    tratarValidacaoCodRetirada();
    scanf("%[^\n]", codigoRet);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return codigoRet;
}

// menu de Retirada: submenu Apagar
void telaApagarRetirada(void){
  char codigoRet[15];
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =         Apagar uma Retirada         =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///              Entre com o Código da Retirada a ser apagada               ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                  Código:   ");
  scanf("%[^\n]", codigoRet);
  getchar();
  while(!verificarDigitos(codigoRet)){
    tratarValidacaoNumerosRetirada();
    scanf("%[^\n]", codigoRet);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

// menu de Retirada: informar código
// de retirada para editar
void telaCodigoRetirada(void){
  char codigoRet[15];
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =    Atualizar Retirada no Sistema    =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///              Entre com o Código da Retirada a ser editada               ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                  Código:   ");
  scanf("%[^\n]", codigoRet);
  getchar();
  while(!verificarDigitos(codigoRet)){
    tratarValidacaoNumerosRetirada();
    scanf("%[^\n]", codigoRet);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

// menu de Retirada: submenu Editar -> Novos dados
char telaAtualizarRetirada(){
  char opcao;
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =         Atualizar Retirada          =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               Opções de Atualização Disponíveis:                        ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///               a. Atualizar Produto                                      ///\n");
  printf("///               b. Atualizar Quantidade                                   ///\n");
  printf("///               c. Atualizar CPF do Cliente                               ///\n");
  printf("///               d. Atualizar Preço                                        ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                  Entre com a opção desejada de atualização:    ");
  scanf("%[a-dA-D]", &opcao);
  getchar();
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return opcao;
}

int gravarDadosRetirada(Retirada *retirada){
  FILE *arq;
  arq = fopen("retiradas.dat", "ab");
  if (arq == NULL){
    return 0;
  }
  fwrite(retirada, sizeof(Retirada), 1, arq);
  fclose(arq);
  return 1;
}

Retirada* pesquisarDadosRetirada(char *codigo_retirada){
  FILE *arq;
  Retirada *retirada;
  arq = fopen("retiradas.dat","rb");
  if(arq==NULL){
    return NULL;
  }
  retirada = (Retirada*) malloc(sizeof(Retirada));
  while(!feof(arq)){
    fread(retirada, sizeof(Retirada),1,arq);
    if((strcmp(retirada->codigoRet,codigo_retirada)==0) && (retirada->status=='1')){
      fclose(arq);
      return retirada;
    }
  }
  fclose(arq);
  return NULL;
}