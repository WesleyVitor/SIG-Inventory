#include <stdio.h>
#include <stdlib.h>
#include "../Validacao/validacoes.h"
#include "./funcoesCliente.h"
#include <ctype.h>

typedef struct cliente Cliente;

struct cliente{
  char cnpj_cpf[14];
  char nome[51];
  char rua[51];
  char bairro[51];
  char numero[7];
  char complemento[20];

};

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


void tratarValidacaoCNPJCPF(void){
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

// menu de Cliente: informar código
// de cliente para editar
void telaCodigoCliente(void){
  char cnpj_cpf[14];
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               =      Atualizar Cliente do Sistema   =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///              Entre com o CNPJ/CPF do Cliente a ser atualizado                ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                    CNPJ/CPF:   ");
  scanf("%s",cnpj_cpf);
  getchar();
  while(!validarCNPJ_CPF(cnpj_cpf)){
    tratarValidacaoCNPJCPF();
    scanf("%s",cnpj_cpf);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}


void tratarValidacaoNome(void){
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =       Digite apenas Letras          =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   Adicione um nome válido: ");
  
  
}


void tratarValidacaoRua(void){
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =       Digite apenas Letras          =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   Adicione uma rua válido: ");
  
}

void tratarValidacaoBairro(void){
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =       Digite apenas Letras          =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   Adicione um bairro válido: ");
  
  
}

void tratarValidacaoComplemento(void){
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =       Digite apenas Letras          =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   Adicione um complemento válido: ");
  
  
}

void tratarValidacaoNumero(void){
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =       Digite apenas Número          =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   Adicione um número válido: ");
  
  
}

void CadastroCliente(void){
  Cliente *cliente;
  cliente = (Cliente*) malloc(sizeof(Cliente));
  system("clear");
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              =          Cadastrar Cliente          =                    ///\n");
  printf("///              =                                     =                    ///\n");
  printf("///              = = = = = = = = = = = = = = = = = = = =                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               Entre com as informações abaixo:                          ///\n");
  printf("///                                                                         ///\n");
  printf("                   CNPJ/CPF(Apenas Números):   ");
  scanf("%[^\n]",cliente->cnpj_cpf);
  getchar();
  //Chamar função para validar cnpj ou cpf
  while(!validarCNPJ_CPF(cliente->cnpj_cpf)){
    tratarValidacaoCNPJCPF();
    scanf("%[^\n]",cliente->cnpj_cpf);
    getchar();
  }

  printf("                   Nome:   ");
  scanf("%[^\n]",cliente->nome);
  getchar();
  while(!validacaoString(cliente->nome)){
    tratarValidacaoNome();
    scanf("%[^\n]",cliente->nome);
    getchar();
  }

  printf("                   Rua:   ");
  scanf("%[^\n]",cliente->rua);
  getchar();
  while(!validacaoString(cliente->rua)){
    tratarValidacaoRua();
    scanf("%[^\n]",cliente->rua);
    getchar();
  }

  printf("                   Bairro:   ");
  scanf("%[^\n]",cliente->bairro);
  getchar();
  while(!validacaoString(cliente->bairro)){
    tratarValidacaoBairro();
    scanf("%[^\n]",cliente->bairro);
    getchar();
  }

  printf("                   Número:   ");
  scanf("%[^\n]",cliente->numero);
  getchar();
  while(!verificarDigitos(cliente->numero)){
    tratarValidacaoNumero();
    scanf("%[^\n]",cliente->numero);
    getchar();
  }

  printf("                   Complemento:   ");
  scanf("%[^\n]",cliente->complemento);
  getchar();
  while(!validacaoString(cliente->complemento)){
    tratarValidacaoComplemento();
    scanf("%[^\n]",cliente->complemento);
    getchar();
  }
  printf("\n///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void PesquisarCliente(void){
  char cnpj_cpf[14];
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
  printf("///              Entre com o CNPJ/CPF do Cliente a ser pesquisado                ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                    CNPJ/CPF:   ");
  scanf("%s",cnpj_cpf);
  getchar();
  while(!validarCNPJ_CPF(cnpj_cpf)){
    tratarValidacaoCNPJCPF();
    scanf("%s",cnpj_cpf);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}


void ApagarCliente(void){
  char cnpj_cpf[14];
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
  printf("///              Entre com o CNPJ/CPF do Cliente a ser apagado              ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                    CNPJ/CPF:   ");
  scanf("%s",cnpj_cpf);
  getchar();
  while(!validarCNPJ_CPF(cnpj_cpf)){
    tratarValidacaoCNPJCPF();
    scanf("%s",cnpj_cpf);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}


char AtualizarCliente(void){
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

void navegacaoMenuCliente(void){

  char opcao;
  do{
    opcao = menuCliente();
    switch(opcao){
      case '1':
        CadastroCliente();
        break;
      case '2':
        PesquisarCliente();
        break;
      case '3':
        ApagarCliente();
        break;
      case '4':
        telaCodigoCliente();
        AtualizarCliente();
        break;
    }
  }while(opcao!='0');
}

