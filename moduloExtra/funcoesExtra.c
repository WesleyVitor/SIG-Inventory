#include <stdio.h>
#include <stdlib.h>
void telaConfirmacao(void){
  char opcao;
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               =      Confirmação da operação        =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               Opções de Confirmações Disponíveis:                       ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                 1. Confirmar Operação                                   ///\n");
  printf("///                 2. Negar Operação                                       ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                   Entre com uma opção desejada:   ");
  scanf("%[1-2]",&opcao);
  getchar();
  printf("\n///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void telaAddValor(void){
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
  scanf("%[a-z A-ZáéíóúàâãõçÁÉÍÓÚÂÀÃÕ0-9.,]", valor);
  getchar();
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}