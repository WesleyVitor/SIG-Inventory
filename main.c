#include <stdio.h>
#include <stdlib.h>

void menuSobre(void);
void menuProduto(void);
void menuCliente(void);

// menu Retirada e Submenus
void menuRetirada(void);
void retiradaCadastro(void);
void retiradaTelaPesquisa(void);
void retiradaPesquisaCliente(void);
void retiradaPesquisaDespachante(void);
void retiradaTelaApagar(void);
void retiradaTelaAtualizar(void);
void retiradaAtualizar(void);

int main(void) {
  menuSobre();
  menuProduto();
  menuCliente();
  menuRetirada();
  retiradaCadastro();
  retiradaTelaPesquisa();
  retiradaPesquisaCliente();
  retiradaPesquisaDespachante();
  retiradaTelaApagar();
  retiradaTelaAtualizar();
  retiradaAtualizar();
  return 0;
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

void menuProduto(void){
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =          Menu de Produtos           =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               1. Cadastrar um novo Produto                              ///\n");
  printf("///               2. Pesquisar dados sobre um Produto                       ///\n");
  printf("///               3. Apagar um Produto do sistema                           ///\n");
  printf("///               4. Atualizar dados de um Produto                          ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                 Entre com sua opção desejada:                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = =                      ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}


void menuCliente(void){
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =          Menu de Clientes           =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               1. Cadastrar um novo Cliente                              ///\n");
  printf("///               2. Pesquisar dados sobre um Cliente                       ///\n");
  printf("///               3. Apagar um Cliente do sistema                           ///\n");
  printf("///               4. Atualizar dados de um Cliente                          ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                 Entre com sua opção desejada:                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = =                      ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

// menu de Retirada
void menuRetirada(void){
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =           Menu de Retirada          =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               1. Cadastrar uma nova Retirada                            ///\n");
  printf("///               2. Pesquisar dados sobre uma Retirada                     ///\n");
  printf("///               3. Apagar uma Retirada do sistema                         ///\n");
  printf("///               4. Atualizar dados de uma Retirada                        ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                 Entre com sua opção desejada:                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = =                      ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

// menu de Retirada -> submenu Cadastrar
void retiradaCadastro(void){
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
  printf("///               Produto:                                                  ///\n");
  printf("///               Quantidade:                                               ///\n");
  printf("///               Nome do Cliente:                                          ///\n");
  printf("///               Tipo de Pagamento:                                        ///\n");
  printf("///               Despachante:                                              ///\n");
  printf("///               Valor:                                                    ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

// menu de Retirada -> submenu Pesquisar
void retiradaTelaPesquisa(void){
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
  printf("///               1.Pesquisar por nome do Cliente                           ///\n");
  printf("///               2.Pesquisar por Despachante                               ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                 Entre com sua opção desejada:                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = =                      ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

// menu de Retirada -> submenu Pesquisar -> por Cliente
void retiradaPesquisaCliente(void){
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =    Pesquisar Retirada por Cliente   =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               Nome do Cliente:                                          ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

// menu de Retirada -> submenu Pesquisar -> por Despachante
void retiradaPesquisaDespachante(void){
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =  Pesquisar Retirada por Despachante =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               Nome do Despachante:                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

// menu de Retirada -> submenu Apagar
void retiradaTelaApagar(void){
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
  printf("///               Digite o número da Retirada para Apagar:                  ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

// menu de Retirada -> submenu Editar
void retiradaTelaAtualizar(void){
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =         Editar uma Retirada         =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               Digite o Número da Retirada para Editar:                  ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

// menu de Retirada -> submenu Editar -> Novos dados
void retiradaAtualizar(void){
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             =     Editar Retirada Selecionada     =                     ///\n");
  printf("///             =                                     =                     ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = =                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               Produto:                                                  ///\n");
  printf("///               Quantidade:                                               ///\n");
  printf("///               Nome do Cliente:                                          ///\n");
  printf("///               Tipo de Pagamento:                                        ///\n");
  printf("///               Despachante:                                              ///\n");
  printf("///               Preço:                                                    ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
