typedef struct retirada Retirada;
struct retirada{
  char codigoRet[15];
  char codigoProd[25];
  int quantidadeProd;
  char cnpjCpfCliente[19];
  float precoUnitario;
};

//struct e arquivos
Retirada* telaCadastroRetirada(void);
int gravarDadosRetirada(Retirada*);

//telas de navegacao
void navegacaoMenuRetirada(void);
char menuRetirada(void);
void telaPesquisarRetirada(void);
void telaApagarRetirada(void);
void telaCodigoRetirada(void);
char telaAtualizarRetirada(void);

//tratamento
void tratarValidacaoCodigoRetirada(void);
void tratarValidacaoProdutoRetirada(void);
void tratarValidacaoCNPJCPF(void);
