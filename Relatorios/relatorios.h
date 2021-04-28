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

void navegacaoMenuRelatorios(void);
char menuRelatorios(void);
void telaRelatoriosClientes(void);
void telaRelatorioProdutos(void);
void telaRelatorioRetiradasTrimestrais(void);
void telaRelatorioFinanceiro(void);
ClienteLista* gerarRelatorioCliente(void);
void relatorioCliente(void);
void exibirLista(ClienteLista*);