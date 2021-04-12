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
void CadastroProduto(void);
void PesquisarProduto(void);
void ApagarProduto(void);
char AtualizarProduto(void);
void navegacaoMenuProduto(void);
void tratarData(void);
void tratarValidacaoNumeros(void);
void tratarValidacaoNome(void);
