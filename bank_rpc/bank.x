struct Conta
{
	int cpf;
	int saldo;
	int transactionCount;
};

struct TransactionInfo
{
	int cpf;
	int valor;
	bool operation;
	int indentifier;
};

program BANK
{
	version VERSAO
	{
		bool ABERTURA(int) = 1;
 		bool FECHAMENTO(int) = 2;
 		bool AUTENTICA(int) = 3;
 		bool TRANSACAO(TransactionInfo) = 4;
 		int CONSULTA(int) = 5;
 	} = 100;
} = 55555556;