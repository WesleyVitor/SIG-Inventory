#include <stdio.h>
#include <stdlib.h>
#include "retirada.h"
#include "validacoes.h"

void menuSobre(void);
char menuPrincipal(void);

char menuProduto(void);
void telaCadastroProduto(void);
void telaPesquisarProduto(void);
void telaApagarProduto(void);
char telaAtualizarProduto(void);
void navegacaoMenuProduto(void);

char menuCliente(void);
void telaCadastroClientePJ(void);
void telaCadastroClientePF(void);
char telaEscolhaTipoCliente(void);
void telaPesquisarClientePF(void);
void telaPesquisarClientePJ(void);
void telaApagarClientePF(void);
void telaApagarClientePJ(void);
char telaAtualizarClientePF(void);
char telaAtualizarClientePJ(void);
void navegacaoMenuCliente(void);
void navegacaoCadastroCliente(void);
void navegacaoPesquisaCliente(void);
void navegacaoApagarCliente(void);
void navegacaoAtualizarCliente(void);

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

void navegacaoCadastroCliente(void){
  char opcaoTipoCliente;
  do{
    opcaoTipoCliente = telaEscolhaTipoCliente();
    switch(opcaoTipoCliente){
      case '1':
        telaCadastroClientePF();
        break;
      case '2':
        telaCadastroClientePJ();
        break;
    }
  }while(opcaoTipoCliente != '0');
}

void navegacaoPesquisaCliente(void){
  char opcaoTipoCliente;
  do{
    opcaoTipoCliente = telaEscolhaTipoCliente();
    switch(opcaoTipoCliente){
      case '1':
        telaPesquisarClientePF();
        break;
      case '2':
        telaPesquisarClientePJ();
        break;
    }
  }while(opcaoTipoCliente != '0');
}

void navegacaoApagarCliente(void){
  char opcaoTipoCliente;
  do{
    opcaoTipoCliente = telaEscolhaTipoCliente();
    switch(opcaoTipoCliente){
      case '1':
        telaApagarClientePF();
        telaConfirmacao();
        break;
      case '2':
        telaApagarClientePJ();
        telaConfirmacao();
        break;
    }
    
  }while(opcaoTipoCliente != '0');
}

void navegacaoAtualizarCliente(void){
  char opcaoTipoCliente;
  do{
    opcaoTipoCliente = telaEscolhaTipoCliente();
    switch(opcaoTipoCliente){
      case '1':
        telaAtualizarClientePF();
        //Cuidado com o tipo da variável
        //Possivelmente mudável
        telaAddValor();
        telaConfirmacao();
        break;
      case '2':
        telaAtualizarClientePJ();
        //Cuidado com o tipo da variável
        //Possivelmente mudável
        telaAddValor();
        telaConfirmacao();
        break;
    }
    
  }while(opcaoTipoCliente != '0');
}

void navegacaoMenuCliente(void){
  char opcao;
  do{
    opcao = menuCliente();
    switch(opcao){
      case '1':
        navegacaoCadastroCliente();
        break;
      case '2':
        navegacaoPesquisaCliente();
        break;
      case '3':
        navegacaoApagarCliente();
        break;
      case '4':
        navegacaoAtualizarCliente();
        break;
    }
  }while(opcao!='0');
}

void navegacaoMenuProduto(void){
  char opcao;
  do{
    opcao = menuProduto();
    switch(opcao){
      case '1':
        telaCadastroProduto();
        telaConfirmacao();
        break;
      case '2':
        telaPesquisarProduto();
        break;
      case '3':
        telaApagarProduto();
        telaConfirmacao();
        break;
      case '4':
        telaAtualizarProduto();
        //Cuidado com o tipo da variável
        telaAddValor();
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

char menuProduto(void){
  char opcao;
  system("clear");
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



void telaCadastroProduto(void){
  char codigo[15];
  char nome[25];
  char validade[11];
  int quantidade;
  float preco;
  char descricao[50];
  system("clear");
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
  printf("                  Código:   ");
  scanf("%[0-9]",codigo);
  getchar();
  printf("                  Nome:   ");
  scanf("%[A-Z a-zÁÉÍÓÚÃáéíóúã]",nome);
  getchar();
  printf("                  Quantidade:   ");
  scanf("%d",&quantidade);
  getchar();
  printf("                  Validade:   ");
  scanf("%[0-9/]",validade);
  getchar();
  printf("                  Preço da Unidade:   ");
  scanf("%f",&preco);
  getchar();
  printf("                  Descrição:   ");
  scanf("%[A-Z a-z0-9]",descricao);
  getchar();
  printf("\n///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void telaPesquisarProduto(void){
  char codigo[15];
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               =     Pesquisar Produto no Sistema    =                   ///\n");
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
  scanf("%[0-9]",codigo);
  getchar();
  printf("\n///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void telaApagarProduto(void){
  char codigo[15];
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               =      Apagar Produto do Sistema      =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///              Entre com o Código do produto a ser apagado                ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                    Código:   ");
  scanf("%[0-9]",codigo);
  getchar();
  printf("\n///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

char telaAtualizarProduto(void){
  char opcao;
  system("clear");
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
  printf("///                c. Atualizar Validade                                    ///\n");
  printf("///                d. Atualizar Preço da Unidade                            ///\n");
  printf("///                e. Atualizar Descrição                                   ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                  Entre com uma opção desejada de atualização:   ");
  scanf("%[a-e]",&opcao);
  getchar();
  printf("\n///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return opcao;
}

char menuCliente(void){
  char opcao;
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =          Menu de Clientes           =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               1. Cadastrar um novo Cliente                              ///\n");
  printf("///               2. Pesquisar dados sobre um Cliente                       ///\n");
  printf("///               3. Apagar um Cliente do sistema                           ///\n");
  printf("///               4. Atualizar dados de um Cliente                          ///\n");
  printf("///               0. Volta para a tela anterior                             ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                    Entre com sua opção desejada:   ");
  scanf("%c",&opcao);
  getchar();
  printf("\n///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return opcao;
}

void telaCadastroClientePJ(void){
  char cnpj[19];
  char nome[45];
  char ramo[20];
  char rua[30];
  char bairro[30];
  char numero[7];
  char complemento[10];
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =   Cadastrar Cliente Pessoa Jurídica =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               Entre com as informações abaixo:                          ///\n");
  printf("///                                                                         ///\n");
  printf("                   CNPJ:   ");
  scanf("%[0-9./]",cnpj);
  getchar();
  printf("                   Nome:   ");
  scanf("%[A-Z a-zzáéíóúÁÉÍÓÚ]",nome);
  getchar();
  printf("                   Ramo:   ");
  scanf("%[A-Z a-z/]",ramo);
  getchar();
  printf("                   Rua:   ");
  scanf("%[A-Z a-z0-9]",rua);
  getchar();
  printf("                   Bairro:   ");
  scanf("%[A-Z a-z0-9]",bairro);
  getchar();
  printf("                   Número:   ");
  scanf("%[0-9.]",numero);
  getchar();
  printf("                   Complemento:   ");
  scanf("%[A-Z a-z]",complemento);
  getchar();
  printf("\n///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void telaCadastroClientePF(void){
  char cpf[12];
  char nome[45];
  char dataDeNascimento[11];
  char rua[30];
  char bairro[30];
  char numero[7];
  char complemento[10];
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =   Cadastrar Cliente Pessoa Física   =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               Entre com as informações abaixo:                          ///\n");
  printf("///                                                                         ///\n");
  printf("                   Cpf:   ");
  scanf("%[0-9.-]",cpf);
  getchar();
  printf("                   Nome:   ");
  scanf("%[A-Z a-záéíóúÁÉÍÓÚ]",nome);
  getchar();
  printf("                   Data de Nascimento:   ");
  scanf("%[0-9/]",dataDeNascimento);
  getchar();
  printf("                   Rua:   ");
  scanf("%[A-Z a-z0-9]",rua);
  getchar();
  printf("                   Bairro:   ");
  scanf("%[A-Z a-z0-9]",bairro);
  getchar();
  printf("                   Número:   ");
  scanf("%[0-9]",numero);
  getchar();
  printf("                   Complemento:   ");
  scanf("%[A-Z a-z]",complemento);
  getchar();
  printf("\n///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();

}

char telaEscolhaTipoCliente(void){
  char opcao;
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               =           Tipo de Cliente           =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               Opções de Clientes Disponíveis:                           ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                 1. Pessoa Física                                        ///\n");
  printf("///                 2. Pessoa Jurídica                                      ///\n");
  printf("///                 0. Voltar ao menu Anterior                              ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                   Entre com uma opção desejada:   ");
  scanf("%c",&opcao);
  getchar();
  printf("\n///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return opcao;
}

void telaPesquisarClientePF(void){
  char cpf[12];
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               =    Pesquisar Cliente no Sistema     =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///              Entre com o CPF do Cliente a ser pesquisado                ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                    CPF:   ");
  scanf("%[0-9.-]",cpf);
  getchar();
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void telaPesquisarClientePJ(void){
  char cnpj[19];
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               =    Pesquisar Cliente no Sistema     =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///              Entre com o CNPJ do Cliente a ser pesquisado               ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                    CNPJ:   ");
  scanf("%[0-9.-/]",cnpj);
  getchar();
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}


void telaApagarClientePF(void){
  char cpf[12];
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               =      Apagar Cliente do Sistema      =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///              Entre com o CPF do Cliente a ser apagado                   ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                    CPF:   ");
  scanf("%[0-9.-/]",cpf);
  getchar();
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void telaApagarClientePJ(void){
  char cnpj[19];
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               =      Apagar Cliente do Sistema      =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///              Entre com o CNPJ do Cliente a ser apagado                  ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                    CNPJ:   ");
  scanf("%[0-9.-/]",cnpj);
  getchar();
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

char telaAtualizarClientePF(void){
  char opcao;
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =    Atualizar Cliente no Sistema     =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               Opções de Atualização Disponíveis:                        ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                a. Atualizar Nome                                        ///\n");
  printf("///                b. Atualizar Data de Nascimento                          ///\n");
  printf("///                c. Atualizar Rua                                         ///\n");
  printf("///                d. Atualizar Bairro                                      ///\n");
  printf("///                e. Atualizar Número                                      ///\n");
  printf("///                f. Atualizar Complemento                                 ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                  Entre com uma opção desejada:   ");
  scanf("%[a-f]",&opcao);
  getchar();
  printf("///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return opcao;
}

char telaAtualizarClientePJ(void){
  char opcao;
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =    Atualizar Cliente no Sistema     =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               Opções de Atualização Disponíveis:                        ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                a. Atualizar Nome                                        ///\n");
  printf("///                b. Atualizar Ramo                                        ///\n");
  printf("///                c. Atualizar Rua                                         ///\n");
  printf("///                d. Atualizar Bairro                                      ///\n");
  printf("///                e. Atualizar Número                                      ///\n");
  printf("///                f. Atualizar Complemento                                 ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                  Entre com uma opção desejada:   ");
  scanf("%[a-f]",&opcao);
  getchar();
  printf("///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return opcao;
}
