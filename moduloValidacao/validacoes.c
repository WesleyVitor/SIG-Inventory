#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "validacoes.h"

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
  scanf("%[a-z A-ZáéíóúàâãõçÁÉÍÓÚÂÀÃÕ0-9.-]", valor);
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

int validarPrimeiroDigitoSubmetido(char cnpj[14]){
  int soma=0;
  int contadorDigito;
  int primeiroMultiplicador=5;
  int segundoMultiplicador=9;
  int primeiroDigitoSubmetido = cnpj[12];
  int resto;

  for(contadorDigito=0;contadorDigito<11;contadorDigito++){
    char digito;
    int digitoAtual;
    int resultado;
    int primeiroDigito;
    
    digito = cnpj[contadorDigito];
    digitoAtual = (int) digito;
    //Segundo a regra os digitos da esquerda a direita deve ser multiplicados por uma variável 
    //que vai diminuindo até 2 e inicia uma nova variável apartir de 9 que será multiplicada adiante
    if(primeiroMultiplicador>=2){
      resultado = primeiroMultiplicador*digitoAtual;
      soma +=resultado;
      primeiroMultiplicador-=1;
    }else{
      resultado = segundoMultiplicador*digitoAtual;
      soma +=resultado;
      segundoMultiplicador-=1;
    }

    resto = soma%11;

  if(resto<2){
    primeiroDigito = '0';
  }else{
    //Converte o inteiro em char
    primeiroDigito = (char) 11-resto;
  }

  if(primeiroDigito = primeiroDigitoSubmetido){
    return 1;
  }else{
    return 0;
  }

  }
}

int validarSegundoDigitoSubmetido(char cnpj[14]){
  int soma=0;
  int contadorDigito;
  int primeiroMultiplicador=6;
  int segundoMultiplicador=9;
  int segundoDigitoSubmetido = cnpj[13];
  int resto;
  for(contadorDigito=0;contadorDigito<12;contadorDigito++){
    char digito;
    int digitoAtual;
    int resultado;
    int segundoDigito;
    
    digito = cnpj[contadorDigito];
    digitoAtual = (int) digito;
    //Segundo a regra os digitos da esquerda a direita deve ser multiplicados por uma variável 
    //que vai diminuindo até 2 e inicia uma nova variável apartir de 9 que será multiplicada adiante
    if(primeiroMultiplicador>=2){
      resultado = primeiroMultiplicador*digitoAtual;
      soma +=resultado;
      primeiroMultiplicador-=1;
    }else{
      resultado = segundoMultiplicador*digitoAtual;
      soma +=resultado;
      segundoMultiplicador-=1;
    }

    resto = soma%11;

  if(resto<2){
    segundoDigito = '0';
  }else{
    //Converte o inteiro em char
    segundoDigito = (char) 11-resto;
  }
  //Verifica se o digito submetido é igual ao que deveria
  if(segundoDigito = segundoDigitoSubmetido){
    return 1;
  }else{
    return 0;
  }

  }
}

int validarCNPJ(char cnpj[14]){
  //Se o cnpj passado não foi um digito ele retorna 0
  int isNumeric=1;
  for(int contador=0;contador<14;contador++){
    if(!isdigit(cnpj[contador])){
      isNumeric = 0;
      return 0;
    }
  }
  //Verifica se o primeiro Digito de verificação é válido
  if(!validarPrimeiroDigitoSubmetido(cnpj)){
    return 0;
  }else{
    //Verifica se o segundo Digito de verificação é válido
    if(!validarSegundoDigitoSubmetido(cnpj)){
      return 0;
    }else{
       return 1;
    } 
  }
}

int testarPrimeiroDigitoSubmetido(char cpf[11]){
  int soma = 0;
  int contadorDigito;
  int contador=10;
  int resto;
  char primeiroDigito;
  char primeiroDigitoSubmetido = cpf[9];

  //O primeiro passo é calcular o primeiro dígito verificador, e para isso, separamos os 
  //primeiros 9 dígitos do CPF (111.444.777) e multiplicamos cada um dos números, da esquerda 
  //para a direita por números descrecente até o número 2
  for(contadorDigito=0;contadorDigito<8;contadorDigito++){
    char digito;
    int numeroAtual;
    int resultado;
    //Converte o string em inteiro
    digito = cpf[contadorDigito];
    numeroAtual = (int) digito;
    resultado = contador * numeroAtual;
    soma+=resultado;
    contador-=1;
  }
  resto = soma%11;

  if(resto<2){
    primeiroDigito = '0';
  }else{
    //Converte o inteiro em char
    primeiroDigito = (char) 11-resto;
  }

  if(primeiroDigito = primeiroDigitoSubmetido){
    return 1;
  }else{
    return 0;
  }
}

int testarSegundoDigitoSubmetido(char cpf[11]){
  int soma = 0;
  int contadorDigito;
  int contador=11;
  int resto;
  char segundoDigito;
  char segundoDigitoSubmetido = cpf[10];

  //O primeiro passo é calcular o primeiro dígito verificador, e para isso, separamos os 
  //primeiros 9 dígitos do CPF (111.444.777) e multiplicamos cada um dos números, da esquerda 
  //para a direita por números descrecente até o número 2
  for(contadorDigito=0;contadorDigito<9;contadorDigito++){
    char digito;
    int numeroAtual;
    int resultado;
    //Converte o string em inteiro
    digito = cpf[contadorDigito];
    numeroAtual = (int) digito;
    resultado = contador * numeroAtual;
    soma+=resultado;
    contador-=1;
  }
  resto = soma%11;
  if(resto<2){
    segundoDigito = '0';
  }else{
    //Converte o inteiro em char
    segundoDigito = (char) 11-resto;
  }

  if(segundoDigito = segundoDigitoSubmetido){
    return 1;
  }else{
    return 0;
  }
}

int validarCPF(char cpf[11]){
  //Se o cpf passado não foi um digito ele retorna 0
  int isNumeric=1;
  for(int contador=0;contador<11;contador++){
    if(!isdigit(cpf[contador])){
      isNumeric = 0;
      return 0;
    }
  }
  //Verifica se o primeiro Digito de verificação é válido
  if(!testarPrimeiroDigitoSubmetido(cpf)){
    return 0;
  }else{
    if(!testarSegundoDigitoSubmetido(cpf)){
      return 0;
    }else{
      return 1;
    }
  }
  
}

// funcao que verifica se
// o ano informado é bissexto
int bissexto(int ano){
  if ((ano % 4 == 0) && (ano % 100 != 0)){
    return 1;
  } else if (ano % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int validaData(char data[11]){
  int listaData[3]; //data em partes
  int i = 0;

  //dividindo a data em 3 partes
  char *token;
  token = strtok(data, "/");
  while (token != NULL){
    //funcao atoi() converte
    //string para inteiro
    listaData[i++] = atoi(token);
    token = strtok(NULL, "/");
  }

  //guardando cada parte nas variaveis
  int dia = listaData[0];
  int mes = listaData[1];
  int ano = listaData[2];

  //teste de mês
  if (mes < 1 || mes > 12){
    return 0;
  }
  //teste de ano
  if (ano < 1900 || ano > 2121){
    return 0;
  }

  //chamando funcao bissexto
  int listaDias[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int anoBissexto;
  anoBissexto = bissexto(ano);
  if (anoBissexto){
    listaDias[1] = 29;
  }

  // maxDia pega o maior dia
  // do mês informado
  int maxDia = listaDias[mes-1];
  if (dia < 1 || dia > maxDia ){
    return 0;
  }
  return 1;
}
