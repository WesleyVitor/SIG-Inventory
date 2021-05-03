

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
int regravarDadosRetirada(Retirada*);

//pesquisa e exibicao de resultado
Retirada* pesquisarDadosRetirada(char *);
void pesquisarRetirada(void);
void exibeDadosRetirada(Retirada*);

//apagar retirada
void apagarRetirada(void);

//editar retirada
void editarRetirada(void);
char tipoAttRetirada(void);
Retirada* atualizarRetirada(Retirada*, char);
//telas de navegacao
void navegacaoMenuRetirada(void);
char menuRetirada(void);
char* telaPesquisarRetirada(void);
char* telaApagarRetirada(void);
char* telaCodigoRetirada(void);

//tratamento
void tratarValidacaoNumerosRetirada(void);
void tratarValidacaoProdutoRetirada(void);
void tratarValidacaoCNPJCPF(void);
void tratarValidacaoCodRetirada(void);
double tratarValidacaoPrecoRetirada(void);
int tratarValidacaoQuantRetirada(void);

//Produtos e clientes validos
int buscarProdutoValido(char*);
int buscarClienteValido(char*);
