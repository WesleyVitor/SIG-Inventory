#include <stdio.h>
#include <stdlib.h>
#include "../Validacao/validacoes.h"
#include "./funcoesCliente.h"
#include <ctype.h>
#include <string.h>



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

//Função que irá cadastrar os clientes em arquivos binários.
int gravarDadosCliente(Cliente* cliente){
  FILE *arquivo;
  arquivo = fopen("Dados/Clientes.dat","ab");
  if(arquivo == NULL){
    return 0;
  }
  fwrite(cliente, sizeof(Cliente),1, arquivo);
  fclose(arquivo);
  free(cliente);
  return 1;
}
//Adaptado de @flaviusgorgonio
//link: https://replit.com/@flaviusgorgonio/AplicacaoComArquivoBinarioc#main.c
Cliente* lerDadosCliente(char cnpj_cpf[]){
  FILE *arquivo;
  Cliente *cliente;
  arquivo = fopen("Dados/Clientes.dat","rb");
  if(arquivo==NULL){
    return NULL;
  }
  cliente = (Cliente*) malloc(sizeof(Cliente));
  while(!feof(arquivo)){
    fread(cliente, sizeof(Cliente),1,arquivo);
    if((strcmp(cliente->cnpj_cpf,cnpj_cpf)==0) && (cliente->status=='1')){
      fclose(arquivo);
      return cliente;
    }
  }
  fclose(arquivo);
  free(cliente);
  return NULL;

}

void CadastroCliente(void){
  Cliente *cliente;
  int statusGravacaoArquivoCliente;
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
  // Adicionar status como ativado(1)
  cliente->status= '1';
  printf("CPF:%s",cliente->cnpj_cpf);
  statusGravacaoArquivoCliente = gravarDadosCliente(cliente);
  if(!statusGravacaoArquivoCliente){
    printf("            **** Ocorreu Algum Erro ao Gravar no Arquivo ****                  \n");
  }else{
    printf("                 **** Dados Gravados Com sucesso ****                          \n");
  }
  printf("\n///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  
}


void exibirCliente(Cliente *cliente){
  printf("****  CPF:%s\n",cliente->cnpj_cpf);
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void PesquisarCliente(void){
  char cnpj_cpf[14];
  Cliente *cliente;
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
  cliente = lerDadosCliente(cnpj_cpf);
  
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  if(cliente==NULL){
    printf("            **** Ocorreu Algum Erro ao ler o   Arquivo ****                  \n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
  }else{
    printf("                 **** Dados lidos Com sucesso ****                           \n");
    exibirCliente(cliente);
  }
  
  free(cliente);
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

