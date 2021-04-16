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
  do{
    opcao = menuRetirada();
    switch(opcao){
      case '1':
        verificaCadastroRetirada();
        break;
      case '2':
        pesquisarRetirada();
        break;
      case '3':
        apagarRetirada();
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
          //addValorString();
        }
        telaConfirmacao();
        break;
    }
  }while(opcao!='0');
}

void tratarValidacaoCNPJCPFRetirada(void){
  limparTela();
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
  limparTela();
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

void tratarValidacaoCodRetirada(void){
  limparTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =    Digite um código de 9 dígitos    =                    ///\n");
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
  limparTela();
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

//chama a funcao gravarDadosRetirada()
//retorna tela dependendo do status retornado
void verificaCadastroRetirada(void){
  Retirada *retirada;
  retirada = telaCadastroRetirada();
  if (!gravarDadosRetirada(retirada)){
    telaErroGravacaoArquivo();
  }else{
    telaConfirmarGravacaoArquivo();
  }
  free(retirada);
}

// menu de Retirada: submenu Cadastrar
Retirada* telaCadastroRetirada(void){
  Retirada *retirada;
  retirada = (Retirada*) malloc(sizeof(Retirada));

  //Variáveis de validação
  int statusScanfQuantidade;
  int statusScanfPreco;
  limparTela();
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
  printf("                  Código da Retirada (9 dígitos):   ");
  scanf("%[^\n]", retirada->codigoRet);
  getchar();
  //verifica se tem 9 digitos
  while (!validarCodRetirada(retirada->codigoRet)){
    tratarValidacaoCodRetirada();
    scanf("%[^\n]", retirada->codigoRet);
    getchar();
  }
  printf("                  Código do Produto:                ");
  scanf("%[^\n]", retirada->codigoProd);
  getchar();
  while(!verificarDigitos(retirada->codigoProd)){
    tratarValidacaoProdutoRetirada();
    scanf("%[^\n]", retirada->codigoProd);
    getchar();
  }
  printf("                  Quantidade do Produto:            ");
  statusScanfQuantidade = scanf("%d", &retirada->quantidadeProd);
  getchar();
  while(statusScanfQuantidade==0){
    tratarValidacaoNumerosRetirada();
    statusScanfQuantidade = scanf("%d", &retirada->quantidadeProd);
    getchar();
  }
  printf("                  CPF/CNPJ do Cliente:              ");
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
  codigoRet = (char*) malloc(10*sizeof(codigoRet));
  limparTela();
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

void pesquisarRetirada(void){
  Retirada* retirada;
  char* codigoRet;

  codigoRet = telaPesquisarRetirada();
  //pesquisa a retirada no arquivo
  retirada = pesquisarDadosRetirada(codigoRet);
  
  if(retirada == NULL){
    telaFalhaBuscaDadoArquivo();
  }else{
    telaConfirmarBuscaDadoArquivo();
    exibeDadosRetirada(retirada);
  }
 
  free(retirada);
  free(codigoRet);
}

void exibeDadosRetirada(Retirada *retirada){
    limparTela();
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
    printf("///             =                                     =                     ///\n");
    printf("                          Retirada nº %s                                        \n", retirada->codigoRet);
    printf("///             =                                     =                     ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///              Código Produto:         %s\n", retirada->codigoProd);
    printf("///              Quantidade:             %d\n", retirada->quantidadeProd);
    printf("///              CPF/CNPJ:               %s\n", retirada->cnpjCpfCliente);
    printf("///              Preço Unitário (R$):    %.2lf\n", retirada->precoUnitario);
    printf("///              Preço Total (R$):       %.2lf\n", retirada->precoTotal);
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = =                    ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

// menu de Retirada: submenu Apagar
char* telaApagarRetirada(void){
  char *codigoRet;
  codigoRet = (char*) malloc(10*sizeof(codigoRet));
  limparTela();
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

void apagarRetirada(void){
  Retirada *retirada;
  char* codigoRet;
  int apagou = 0;
  int confirma = 0;

  codigoRet = telaApagarRetirada();
  //tela de confirmaçao
  confirma = telaConfirmacao();
  if(confirma == 1){
    //pesquisa a retirada no arquivo
    retirada = pesquisarDadosRetirada(codigoRet);
    if (retirada == NULL){
      telaErroDeletarDadosArquivo();
    }else{
      retirada->status='0';
      apagou = regravarDadosRetirada(retirada);
      if(apagou){
        telaConfirmarDeletarDadosArquivo();
      }else{
        telaErroDeletarDadosArquivo();
      }
    }

    free(codigoRet);


  }

}

// menu de Retirada: informar código
// de retirada para editar
void telaCodigoRetirada(void){
  char codigoRet[15];
  limparTela();
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
  limparTela();
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

int regravarDadosRetirada(Retirada* retirada){
  FILE* arq;
  Retirada* retiradaLida;
  int achou=0;
  arq = fopen("retiradas.dat","r+b");
  if(arq == NULL){
    fclose(arq);
    return 0;
  }
  retiradaLida = (Retirada*) malloc(sizeof(Retirada));
  while(!feof(arq)){
    fread(retiradaLida, sizeof(Retirada),1,arq);
    if((strcmp(retirada->codigoRet, retiradaLida->codigoRet)==0) && (retiradaLida->status=='1')){ 
      achou = 1;
      //retirada lida recebe a retirada
      //com status 0 (apagada)
      retiradaLida = retirada;
      fseek(arq,-1*sizeof(Retirada),SEEK_CUR);
      fwrite(retiradaLida, sizeof(Retirada),1,arq);
      break;
    }
  }
  fclose(arq);
  free(retiradaLida);
  if(!achou){
    return 0;
  }else{
    return 1;
  }
}