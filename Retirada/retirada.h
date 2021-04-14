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

//struct e arquivos
Retirada* telaCadastroRetirada(void);
int gravarDadosRetirada(Retirada*);
Retirada* pesquisarDadosRetirada(char *);

//telas de navegacao
void navegacaoMenuRetirada(void);
char menuRetirada(void);
char* telaPesquisarRetirada(void);
void telaApagarRetirada(void);
void telaCodigoRetirada(void);
char telaAtualizarRetirada(void);

//tratamento
void tratarValidacaoNumerosRetirada(void);
void tratarValidacaoProdutoRetirada(void);
void tratarValidacaoCNPJCPF(void);
void tratarValidacaoCodRetirada(void);
