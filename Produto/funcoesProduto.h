typedef struct produto Produto;
struct produto{
  char codigoProd[15];
  char nomeProd[25];
  int quantidadeProd;
  char marcaProd[20];
  double precoUnitarioProd;
  char descricaoProd[100];
  char status;
};

char menuProduto(void);
Produto* telaCadastroProduto(void);
void CadastroProduto(void);
char* telaPesquisarProduto(void);
void PesquisarProduto(void);
int ApagarProduto(void);
char telaMenuAtualizarProduto(void);
void navegacaoMenuProduto(void);
void tratarData(void);
void tratarValidacaoNumeros(void);
void tratarValidacaoNome(void);
void exibirProduto(Produto*);
Produto* buscarProduto(char*);
int AtualizarProduto(void);
