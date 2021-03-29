#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "validacoes.h"
#include <string.h>

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

int ehDigito(char caracter){
  if((caracter>='0') && (caracter<='9')){
    return 1;
  }else{
    return 0;
  }
}

int verificarDigitos(char vetorCaracteres[]){
  int contador;
  int quantidadeVetor = strlen(vetorCaracteres);
  //Se o cnpj passado não foi um digito ele retorna 0
  for(contador=0;contador<quantidadeVetor;contador++){
    if(!ehDigito(vetorCaracteres[contador])){
      return 0;
    }
  }
  return 1;
}

int validarCNPJ(char cnpj[]){
  int tamanhoCNPJ = strlen(cnpj);
  if(tamanhoCNPJ!=14){
    return 0;
  }
  if(!verificarDigitos(cnpj)){
    return 0;
  }
  //Verifica se o primeiro Digito de verificação é válido
  if(!testarPrimeiroDigitoCNPJSubmetido(cnpj)){
    return 0;
  }else{
    //Verifica se o segundo Digito de verificação é válido
    if(!testarSegundoDigitoCNPJSubmetido(cnpj)){
      return 0;
    }else{
      return 1;
    }
  }
}

int testarPrimeiroDigitoCNPJSubmetido(char cnpj[]){
  int soma=0;
  int contadorDigito;
  int primeiroMultiplicador=5;
  int segundoMultiplicador=9;
  char primeiroDigitoSubmetido = cnpj[12];
  char primeiroDigito;
  int resto;
  int resultado;

  for(contadorDigito=0;contadorDigito<=11;contadorDigito++){
    int digitoAtual;
    //Converte de caracter para inteiro
    /*
      Explicação:
      int digitoAtual = digito - '0';
      <=>
      digitoAtual = (int)digito - (int) '0' => Pegando a correspondência inteira do digito na tabela ASCII e subtraindo da
                                    correspondência inteira do caracter 0(48) na tabela
    
     */
    digitoAtual = cnpj[contadorDigito] - '0';
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
  }
  resto = soma%11;
  if(resto<2){
    primeiroDigito = '0';
  }else{
    //Converte o inteiro em char
    /*
      Explicação:
      char primeiroDigito = (11-resto) + 48; <=> Pega o valor da equação(11-resto) e soma com 48 que corresponde em inteiro
                                                ao 0 na tabela ASCII, assim resultará em um inteiro que corresponde a algum
                                                caracter entre 0 e 9 na tabela ASCII
     */
    primeiroDigito = (11-resto)+48;
  }
  if(primeiroDigito == primeiroDigitoSubmetido){
    return 1;
  }else{
    return 0;
  }
}

int testarSegundoDigitoCNPJSubmetido(char cnpj[]){
  int soma=0;
  int contadorDigito;
  int primeiroMultiplicador=6;
  int segundoMultiplicador=9;
  char segundoDigitoSubmetido = cnpj[13];
  int resto;
  char segundoDigito;
  int resultado;
  for(contadorDigito=0;contadorDigito<=12;contadorDigito++){
    int digitoAtual;
  
    digitoAtual = cnpj[contadorDigito] - '0';
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
  }
  resto = soma%11;

  if(resto<2){
    segundoDigito = '0';
  }else{
    //Converte o inteiro em char
    segundoDigito = (11-resto)+48;
  }
  //Verifica se o digito submetido é igual ao que deveria
  if(segundoDigito == segundoDigitoSubmetido){
    return 1;
  }else{
    return 0;
  }

  
}

int testarPrimeiroDigitoCPFSubmetido(char cpf[]){
  int soma = 0;
  int contadorDigito;
  int contador=10;
  int resto;
  char primeiroDigito;
  char primeiroDigitoSubmetido = cpf[9];
  int resultado;
  //O primeiro passo é calcular o primeiro dígito verificador, e para isso, separamos os 
  //primeiros 9 dígitos do CPF (111.444.777) e multiplicamos cada um dos números, da esquerda 
  //para a direita por números descrecente até o número 2
  for(contadorDigito=0;contadorDigito<=8;contadorDigito++){
    int numeroAtual;
    //Converte de caracter para inteiro
    /*
      Explicação:
      int numeroAtual = cpf[contadorDigito]-'0';
      <=>
      digitoAtual = (int)digito - (int) '0' => Pegando a correspondência inteira do digito na tabela ASCII e subtraindo da
                                    correspondência inteira do caracter 0(48) na tabela
    
     */
    numeroAtual = cpf[contadorDigito]-'0';
    resultado = contador * numeroAtual;
    soma+=resultado;
    contador-=1;
  }
  resto = soma%11;

  if(resto<2){
    primeiroDigito = '0';
  }else{
    //Converte o inteiro em char
    /*
      Explicação:
      char primeiroDigito = (11-resto) + 48; <=> Pega o valor da equação(11-resto) e soma com 48 que corresponde em inteiro
                                                ao 0 na tabela ASCII, assim resultará em um inteiro que corresponde a algum
                                                caracter entre 0 e 9 na tabela ASCII
     *///Converte o inteiro em char
    primeiroDigito = (11-resto)+48;
  }

  if(primeiroDigito == primeiroDigitoSubmetido){
    return 1;
  }else{
    return 0;
  }
}

int testarSegundoDigitoCPFSubmetido(char cpf[]){
  int soma = 0;
  int contadorDigito;
  int contador=11;
  int resto;
  char segundoDigito;
  char segundoDigitoSubmetido = cpf[10];
  int resultado;
  //O primeiro passo é calcular o primeiro dígito verificador, e para isso, separamos os 
  //primeiros 9 dígitos do CPF (111.444.777) e multiplicamos cada um dos números, da esquerda 
  //para a direita por números descrecente até o número 2
  for(contadorDigito=0;contadorDigito<=9;contadorDigito++){
    
    int numeroAtual;
    
    //Converte o string em inteiro
    numeroAtual = cpf[contadorDigito]-'0';
    resultado = contador * numeroAtual;
    soma+=resultado;
    contador-=1;
  }
  resto = soma%11;
  if(resto<2){
    segundoDigito = '0';
  }else{
    //Converte o inteiro em char
    segundoDigito = (11-resto)+48;
  }

  if(segundoDigito == segundoDigitoSubmetido){
    return 1;
  }else{
    return 0;
  }
}

int validarCPF(char cpf[]){
  int tamanhoCPF = strlen(cpf);
  if(tamanhoCPF != 11){
    return 0;
  }
  if(!verificarDigitos(cpf)){
    return 0;
  }
  
  //Verifica se o primeiro Digito de verificação é válido
  if(!testarPrimeiroDigitoCPFSubmetido(cpf)){
    return 0;
  }else{
    if(!testarSegundoDigitoCPFSubmetido(cpf)){
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

//Função que verifica se um determinado caracter passado como parâmetro é uma letra
int ehLetra(char caracter){
  if((caracter>='a') && (caracter<='z')){
    return 1;
  }else if((caracter>='A') && (caracter<='Z')){
    return 1;
  }else{
    return 0;
  }
}

//Função que verifica se os caracteres de uma string são letras
//Com apoio da função ehLetra()
int validacaoString(char *string){
  int tamanho;
  tamanho = strlen(string);
  if(tamanho!=0){
    for(int i=0;i<tamanho;i++){
      //Vericar se o valor é um espaço
      if(string[i]==32){
        continue;
      }
      if(!ehLetra(string[i])){
        return 0;
      }
    }
  }else{
    return 0;
  }
  return 1;
}
