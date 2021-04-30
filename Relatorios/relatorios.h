typedef struct clienteLista ClienteLista;
struct clienteLista{
  char cnpj_cpf[21];
  char nome[51];
  char rua[51];
  char bairro[51];
  char numero[7];
  char complemento[20];
  char status;
  ClienteLista* prox;
};

typedef struct produtoLista ProdutoLista;
struct produtoLista{
  char codigoProd[15];
  char nomeProd[25];
  int quantidadeProd;
  char marcaProd[20];
  double precoUnitarioProd;
  char descricaoProd[100];
  char status;
  ProdutoLista* prox;
};

void navegacaoMenuRelatorios(void);
char menuRelatorios(void);
void telaRelatoriosClientes(void);
void relatorioProduto(void);
ProdutoLista* gerarRelatProd(void);
void exibirProdutos(ProdutoLista*);
ClienteLista* gerarRelatorioCliente(void);
void relatorioCliente(void);
void exibirLista(ClienteLista*);