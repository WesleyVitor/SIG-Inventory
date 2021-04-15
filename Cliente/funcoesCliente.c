#include <stdio.h>
#include <stdlib.h>
#include "../Validacao/validacoes.h"
#include "./funcoesCliente.h"
#include <ctype.h>
#include <string.h>
#include "../TelasUteis/telas.h"


char menuCliente(void){
  char opcao;
  limparTela();
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

// menu de Cliente: informar código
// de cliente para editar
void telaCodigoCliente(void){
  char cnpj_cpf[14];
  limparTela();
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
  limparTela();
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
  limparTela();
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
  limparTela();
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
  limparTela();
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
  limparTela();
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
Cliente* buscarCliente(char *cnpj_cpf){
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

Cliente* telaCadastroCliente(void){
  Cliente *cliente;
  cliente = (Cliente*) malloc(sizeof(Cliente));
  limparTela();
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
  printf("\n///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return cliente;
  
}

void CadastrarCliente(void){
  Cliente* cliente;
  int ocorreuGravacao;
  //Recebe um ponteiro com os dados de cliente.
  cliente = telaCadastroCliente();

  //Gravar dados do cliente em arquivo.
  ocorreuGravacao = gravarDadosCliente(cliente);
  if(!ocorreuGravacao){
    telaErroGravacaoArquivo();
  }else{
    telaConfirmarGravacaoArquivo();
  }

  
}




void exibirCliente(Cliente *cliente){
  printf("****  Nome:%s\n",cliente->nome);
  printf("****  Status:%c\n",cliente->status);
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

char* telaProcurarCliente(void){
  char *cnpj_cpf;
  //Alocando memória de 18 bytes para armazenar o cpf/cnpj.
  cnpj_cpf = (char*) malloc(21*sizeof(cnpj_cpf));
  limparTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               =    Procurar Cliente no Sistema      =                   ///\n");
  printf("///               =                                     =                   ///\n");
  printf("///               = = = = = = = = = = = = = = = = = = = =                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///              Entre com o CNPJ/CPF do Cliente a ser pesquisado           ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                    CNPJ/CPF:   ");
  scanf("%[^\n]",cnpj_cpf);
  getchar();
  while(!validarCNPJ_CPF(cnpj_cpf)){
    tratarValidacaoCNPJCPF();
    scanf("%[^\n]",cnpj_cpf);
    getchar();
  }
  
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return cnpj_cpf;

}

void PesquisarCliente(void){
  Cliente* cliente;
  char* cnpj_cpf;
  //Receber o cnpj ou cpf digitado pelo cliente à ser procurado.
  cnpj_cpf = telaProcurarCliente();

  // Pegar o cliente que tem esse dado cadastrado.
  cliente = buscarCliente(cnpj_cpf);
  
  if(cliente == NULL){
    telaFalhaBuscaDadoArquivo();
  }else{
    telaConfirmarBuscaDadoArquivo();
    //Exibir o cliente selecionado.
    exibirCliente(cliente);
  }

  
  
  //Desalocar memória.
  free(cliente);
  free(cnpj_cpf);

}

char* telaApagarCliente(void){
  char* cnpj_cpf;
  //Alocando memória de 21 bytes para armazenar o cpf/cnpj.
  cnpj_cpf = (char*) malloc(21*sizeof(cnpj_cpf));
  limparTela();
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
  scanf("%[^\n]",cnpj_cpf);
  getchar();
  while(!validarCNPJ_CPF(cnpj_cpf)){
    tratarValidacaoCNPJCPF();
    scanf("%[^\n]",cnpj_cpf);
    getchar();
  }
  
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return cnpj_cpf;
}

int ApagarCliente(void){
  Cliente* cliente;
  char* cnpj_cpf;
  int apagado;
  //Pegar o cnpj/cpf do cliente específico para atualizar
  cnpj_cpf = telaProcurarCliente();

  //Procurar Cliente.
  cliente = buscarCliente(cnpj_cpf);

  if(cliente !=NULL){

    cliente->status = '0';
    //Mandar Regravar os dados do cliente no arquivo.
    apagado = regravarDados(cliente);
  }else{
    
    free(cnpj_cpf);
    telaErroAtualizarDadosArquivo();
    return 0;
  }

  //Desalocar Memória
  
  free(cnpj_cpf);
  if(apagado == 1){
    telaConfirmarDeletarDadosArquivo();
    return 1;
  }else{
    telaErroDeletarDadosArquivo();
    return 0;
  }
}


int AtualizarCliente(void){
  Cliente* cliente;
  char* cnpj_cpf;
  char opcaoAtualizar;
  char* valorRecente;
  int atualizado = 0;
  //Pegar o cnpj/cpf do cliente específico para atualizar
  cnpj_cpf = telaProcurarCliente();

  //Pegar o campo a ser atualizado.
  opcaoAtualizar = telaMenuAtualizarCliente();
  //Pegar o valor do campo.
  valorRecente = telaAddValor();

  //Procurar Cliente.
  cliente = buscarCliente(cnpj_cpf);

  if(cliente !=NULL){

    //Editar cliente com a nova informação.
    cliente = editarCliente(cliente, opcaoAtualizar, valorRecente);
    //Mandar Regravar os dados do cliente no arquivo.
    atualizado = regravarDados(cliente);
  }else{
    free(valorRecente);
    free(cnpj_cpf);
    telaErroAtualizarDadosArquivo();
    return 0;
  }

  //Desalocar Memória
  free(valorRecente);
  free(cnpj_cpf);




  if(atualizado == 1){
    telaConfirmarAtualizarDadosArquivo();
    return 1;
  }else{
    telaErroAtualizarDadosArquivo();
    return 0;
  }
}

Cliente* editarCliente(Cliente* cliente, char opcaoAtualizar, char* valorRecente){
  switch(opcaoAtualizar){
    //Atualizar o nome.
    case 'a':
      strcpy(cliente->nome,valorRecente);
    //Atualizar a Rua
    case 'b':
      strcpy(cliente->rua,valorRecente);
    //Atualizar o Bairro  
    case 'c':
      strcpy(cliente->bairro,valorRecente);
    //Atualizar o Número
    case 'd':
      strcpy(cliente->numero,valorRecente);
    //Atualizar o Complemento
    case 'e':
      strcpy(cliente->complemento,valorRecente);       
  }
  return cliente;
}

int regravarDados(Cliente* cliente){
  FILE* arquivo;
  Cliente* clienteLido;
  int achou=0;
  arquivo = fopen("Dados/Clientes.dat","r+b");
  if(arquivo == NULL){
    //Fazer tratamento
    fclose(arquivo);
    return 0;
  }
  clienteLido = (Cliente*) malloc(sizeof(Cliente));
  while(!feof(arquivo)){
    fread(clienteLido, sizeof(Cliente),1,arquivo);
    if((strcmp(cliente->cnpj_cpf, clienteLido->cnpj_cpf)==0) && (clienteLido->status=='1')){ 
      achou =1;
      clienteLido = cliente;
      fseek(arquivo,-1*sizeof(Cliente),SEEK_CUR);
      fwrite(clienteLido, sizeof(Cliente),1,arquivo);
      break;
    }
  }
  fclose(arquivo);
  free(clienteLido);
  if(!achou){
    return 0;
  }else{
    return 1;
  }

}

char telaMenuAtualizarCliente(void){
  char opcao;
  limparTela();
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
  printf("///                b. Atualizar Rua                                         ///\n");
  printf("///                c. Atualizar Bairro                                      ///\n");
  printf("///                d. Atualizar Número                                      ///\n");
  printf("///                e. Atualizar Complemento                                 ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("                  Entre com uma opção desejada:   ");
  scanf("%c",&opcao);
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
        CadastrarCliente();
        break;
      case '2':
        PesquisarCliente();
        break;
      case '3':
        ApagarCliente();
        break;
      case '4':
        
        AtualizarCliente();
        break;
    }
  }while(opcao!='0');
}

