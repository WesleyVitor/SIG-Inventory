#include <stdio.h>
#include <stdlib.h>
#include "retirada.h"
#include "../Validacao/validacoes.h"

typedef struct retirada Retirada;

struct retirada{
  char codigoRet[15];
  char codigoProd[25];
  int quantidadeProd;
  char cnpjCpfCliente[19];
  float precoUnitario;
};

//funcao navegacaoMenuRetirada
void navegacaoMenuRetirada(void){
  char opcao;
  char tipoAtt;
  do{
    opcao = menuRetirada();
    switch(opcao){
      case '1':
        telaCadastroRetirada();
        break;
      case '2':
        telaPesquisarRetirada();
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

void tratarValidacaoCodigoRetirada(void){
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
  printf("///                   Adicione um código válido: ");
  
}

void tratarValidacaoProdutoRetirada(void){
  system("clear");
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
  printf("///                   Adicione um Produto válido: ");
  
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
void telaCadastroRetirada(void){
  Retirada *retirada;
  retirada = (Retirada*) malloc(sizeof(Retirada));
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
  printf("                  Código da Retirada:   ");
  scanf("%[^\n]", retirada->codigoRet);
  getchar();
  while(!verificarDigitos(retirada->codigoRet)){
    tratarValidacaoCodigoRetirada();
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
  scanf("%d", &retirada->quantidadeProd);
  getchar();
  printf("                  CPF/CNPJ do Cliente:   ");
  scanf("%[^\n]", retirada->cnpjCpfCliente);
  getchar();
  while(!validarCNPJ_CPF(retirada->cnpjCpfCliente)){
    tratarValidacaoCNPJCPFRetirada();
    scanf("%[^\n]", retirada->cnpjCpfCliente);
    getchar();
  }
  printf("                  Preço Unitário do Produto (R$):   ");
  scanf("%f", &retirada->precoUnitario);
  getchar();
  //Preço total da compra
  retirada->precoUnitario = retirada->precoUnitario*retirada->quantidadeProd;
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  free(retirada);
}

// menu de Retirada: submenu Pesquisar
void telaPesquisarRetirada(void){
  char codigoRet[15];
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
  while(!verificarDigitos(codigoRet)){
    tratarValidacaoCodigoRetirada();
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
    tratarValidacaoCodigoRetirada();
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
    tratarValidacaoCodigoRetirada();
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
