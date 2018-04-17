#include <stdio.h>
#include <rpc/rpc.h>

#define NUMBER_OF_ACCOUNTS 50

struct account
{
	int id;
	int cpf;
	int balance;
	int tx_num;
}

enum tx_type 
{
	CASH_OUT;
	DEPOSIT;
}

struct transaction
{
	int value;
	tx_type type;
	int tx_num;
}

struct account accounts[NUMBER_OF_ACCOUNTS];

int get_account_index(int cpf) 
{
	for(int i = 0; i < NUMBER_OF_ACCOUNTS; i++)
	{
		if (accounts[i].cpf == cpf)
		{
			return i;
		}
	}
	return -1;
}

bool cash_out(int value)
{

}

bool deposit()
{

}

int get_last_available_index() 
{
	for(int i = 0; i < NUMBER_OF_ACCOUNTS; i++)
	{
		if (accounts[i] == 0)
		{
			return i;
		}
	}
	return -1;

}

bool create_account(int _id, int _cpf)
{
	if (get_account_index(cpf) != -1) 
	{
		return false;
	} 
	else 
	{
		

		accounts.add({
			id: _id,
			cpf: _cpf
		})
		return true;
	}
	// if get_account_index != -1
	// account already exists
	// DO NOT create another account 
}  

int main() 
{
	memset(accounts, 0, sizeof(account)*NUMBER_OF_ACCOUNTS);

}

