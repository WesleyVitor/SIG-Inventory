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
void CadastroCliente(void);
void PesquisarCliente(void);
void ApagarCliente(void);
char AtualizarCliente(void);
void navegacaoMenuCliente(void);
void tratarValidacaoCNPJCPF(void);
void tratarData(void);
void tratarValidacaoNome(void);
void tratarValidacaoRua(void);
void tratarValidacaoBairro(void);
void tratarValidacaoComplemento(void);
void tratarValidacaoNumero(void);
int gravarDadosCliente(Cliente*);
Cliente* lerDadosCliente(char *);
void exibirCliente(Cliente *);