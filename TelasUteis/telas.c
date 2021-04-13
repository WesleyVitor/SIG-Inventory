#include <stdio.h>
#include "../Validacao/validacoes.h"


void telaConfirmarGravacaoArquivo(void){
  limparTela();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                    Dados Gravados com sucesso                           ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void telaErroGravacaoArquivo(void){
  limparTela();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///               Ocorreu algum erro ao Gravar os Dados                      ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void telaFalhaBuscaDadoArquivo(void){
  limparTela();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                     Dados não disponível                                ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void telaConfirmarBuscaDadoArquivo(void){
  limparTela();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                   Os Dados foram encontrados                            ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void telaConfirmarAtualizarDadosArquivo(void){
  limparTela();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                   Os Dados foram Atualizados                            ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void telaErroAtualizarDadosArquivo(void){
  limparTela();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                   Os Dados não foram Atualizados                        ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}