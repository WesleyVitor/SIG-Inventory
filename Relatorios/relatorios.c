#include <stdio.h>
#include <stdlib.h>
#include "../Validacao/validacoes.h"
#include "./relatorios.h"
void navegacaoMenuRelatorios(void){
  char opcao;
  do{
    opcao = menuRelatorios();
    switch(opcao){
      case '1':
        telaRelatoriosClientes();
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
  printf("///               1. Relatórios de Clientes Cadastrados                     ///\n");
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