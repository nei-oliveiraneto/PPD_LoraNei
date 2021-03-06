/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calc.h"
#include "stdio.h"

int main( int argc, char *argv[] )
{
	char *host;

	if (argc != 5) {
		printf ("usage: server_host, first num, second num, operation\n");
		exit (1);
	}
	host = argv[1];
	int x = atoi(argv[2]);
	int y = atoi(argv[3]);
	int operation = atoi(argv[4]);

	CLIENT *clnt;
	clnt = clnt_create (host, PROG, VERSAO, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
	
	operandos op;
	op.x = x;
	op.y = y;
	if( operation == 0 )
	{
		int *result = add_100( &op, clnt );
		if (result == (int *) NULL)
		{
			clnt_perror (clnt, "add call failed");
			exit(1);
		}
		printf( "Result of sum is: %d\n", *result );

	}
	else
	{
		int *result = sub_100( &op, clnt );
		if (result == (int *) NULL)
		{
			clnt_perror (clnt, "sub call failed");
			exit(1);
		}
		printf( "Result of sub is: %d\n", *result );
	}

	clnt_destroy(clnt);
}
