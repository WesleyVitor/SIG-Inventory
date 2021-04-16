typedef struct cliente Cliente;

struct cliente{
  char cnpj_cpf[21];
  char nome[51];
  char rua[51];
  char bairro[51];
  char numero[7];
  char complemento[20];
  char status;

};

char menuCliente(void);
Cliente* telaCadastroCliente(void);
char* telaProcurarCliente(void);
void CadastrarCliente(void);
void PesquisarCliente(void);
char* telaApagarCliente(void);
char telaMenuAtualizarCliente(void);
void navegacaoMenuCliente(void);
void tratarValidacaoCNPJCPF(void);
void tratarData(void);
void tratarValidacaoNome(void);
void tratarValidacaoRua(void);
void tratarValidacaoBairro(void);
void tratarValidacaoComplemento(void);
void tratarValidacaoNumero(void);
int gravarDadosCliente(Cliente*);
Cliente* buscarCliente(char *);
void exibirCliente(Cliente *);
int AtualizarCliente(void);
int regravarDados(Cliente*);
Cliente* editarCliente(Cliente*, char, char*);
int ApagarCliente(void);