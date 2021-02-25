#include <stdio.h>
#include <stdlib.h>
#include "moduloProduto/funcoesProduto.h"
#include "moduloCliente/funcoesCliente.h"
#include "moduloExtra/funcoesExtra.h"
void menuSobre(void);
char menuPrincipal(void);

//void navegacaoMenuProduto(void);


void navegacaoMenuRetirada(void);
char menuRetirada(void);
void telaCadastroRetirada(void);
void telaPesquisarRetirada(void);
void telaApagarRetirada(void);
void telaCodigoRetirada(void);
char telaAtualizarRetirada(void);

void addValorString(void);
void addValorInt(void);
void addValorFloat(void);

int main(void) {
  char opcao;

  menuSobre();
  
  do{
    opcao = menuPrincipal();
    switch(opcao){
      case '1':
        navegacaoMenuProduto();
        break;
      case '2':
        navegacaoMenuCliente();
        break;
      case '3':
        navegacaoMenuRetirada();
        break;
    }
  }while(opcao!='0');
  
  return 0;
}


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
        if (tipoAtt == 'b' | tipoAtt == 'B'){
          addValorInt();
        } else if (tipoAtt == 'd' | tipoAtt == 'D'){
          addValorFloat();
        } else if (tipoAtt == 'a' | tipoAtt == 'A' |
                   tipoAtt == 'c' | tipoAtt == 'C')
        {
          addValorString();
        }
        telaConfirmacao();
        break;
    }
  }while(opcao!='0');
}

void menuSobre(void) {
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
  printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
  printf("///               Departamento de Computação e Tecnologia                   ///\n");
  printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
  printf("///               Projeto Controle de Estoque de Empresas                   ///\n");
  printf("///         Developed by  @WesleyVitor and @adson62 - Jan, 2021             ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///         = = = = = Controle de Estoque de Empresas = = = = =             ///\n");
  printf("///                                                                         ///\n");
  printf("///  O controle de estoque em uma empresa é uma tarefa fundamental para o   ///\n");
  printf("///  seu funcionamento. Saber exatamente a quantidade de produtos e quais   ///\n");
  printf("///  deles estão disponíveis. Para isso, um software de controle de estoque ///\n");
  printf("///  é indispensável para haja uma administração bem feita dessa área, de   ///\n");
  printf("///  forma rápida e eficiente. Sem isso, seria praticamente impossível      ///\n");
  printf("///  que as médias/grandes empresas obtivessem um controle dos produtos.    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

char menuPrincipal(void){
  char opcao;
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =           Menu Principal            =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               1. Módulo de Produto                                      ///\n");
  printf("///               2. Módulo de Cliente                                      ///\n");
  printf("///               3. Módulo de Retirada                                     ///\n");
  printf("///               0. Sair do programa                                       ///\n");
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



void addValorString(void){
  char valor[50];
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               =         Valor da Informação         =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                    Entre com um valor desejado                          ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                       Valor:   ");
  scanf("%[a-z A-ZáéíóúàâãõçÁÉÍÓÚÂÀÃÕ]", valor);
  getchar();
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void addValorInt(void){
  int valor;
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               =           Valor Inteiro             =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                    Entre com a quantidade desejada                      ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                       Quantidade:   ");
  scanf("%d", &valor);
  getchar();
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void addValorFloat(void){
  float valor;
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               =         Valor da Informação         =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                    Entre com um valor desejado                          ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                       Valor:   ");
  scanf("%f", &valor);
  getchar();
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
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
  char codigo[15];
  char produto[25];
  int quantidade;
  char cliente[19];
  float preco;
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
  printf("                  Código:   ");
  scanf("%[0-9]", codigo);
  getchar();
  printf("                  Produto:   ");
  scanf("%[a-z A-ZáéíóúàâãõçÁÉÍÓÚÂÀÃÕ]", produto);
  getchar();
  printf("                  Quantidade:   ");
  scanf("%d", &quantidade);
  getchar();
  printf("                  CPF/CNPJ do Cliente:   ");
  scanf("%[0-9.-/]", cliente);
  getchar();
  printf("                  Preço (R$):   ");
  scanf("%f", &preco);
  getchar();
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

// menu de Retirada: submenu Pesquisar
void telaPesquisarRetirada(void){
  char codigo[15];
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
  scanf("%[0-9]", codigo);
  getchar();
  printf("///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

// menu de Retirada: submenu Apagar
void telaApagarRetirada(void){
  char codigo[15];
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
  scanf("%[0-9]", codigo);
  getchar();
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
  char codigo[15];
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
  scanf("%[0-9]", codigo);
  getchar();
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
  printf("///               c. Atualizar Nome do Cliente                              ///\n");
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
