typedef struct retirada Retirada;
struct retirada{
  char codigoRet[10];
  char codigoProd[25];
  int quantidadeProd;
  char cnpjCpfCliente[19];
  double precoUnitario;
  double precoTotal;
  char status;
};

//cadastro e gravacao em arquivo
Retirada* telaCadastroRetirada(void);
void verificaCadastroRetirada(void);
int gravarDadosRetirada(Retirada*);

//pesquisa e exibicao de resultado
Retirada* pesquisarDadosArqRetirada(char *);
void exibeDadosRetirada(Retirada*);

//telas de navegacao
void navegacaoMenuRetirada(void);
char menuRetirada(void);
void telaPesquisarRetirada(void);
void telaApagarRetirada(void);
void telaCodigoRetirada(void);
char telaAtualizarRetirada(void);

//tratamento
void tratarValidacaoNumerosRetirada(void);
void tratarValidacaoProdutoRetirada(void);
void tratarValidacaoCNPJCPF(void);
void tratarValidacaoCodRetirada(void);
