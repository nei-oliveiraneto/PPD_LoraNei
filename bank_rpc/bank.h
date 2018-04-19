/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _BANK_H_RPCGEN
#define _BANK_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define NUM_OF_ACCOUNTS 50

struct Conta {
	int cpf;
	int saldo;
	int transactionCount;
};
typedef struct Conta Conta;

struct Conta Contas[NUM_OF_ACCOUNTS];

struct TransactionInfo {
	int cpf;
	int valor;
	bool_t operation;
	int transactionCount;
};
typedef struct TransactionInfo TransactionInfo;

#define BANK 55555556
#define VERSAO 100

#if defined(__STDC__) || defined(__cplusplus)
#define ABERTURA 1
extern  bool_t * abertura_100(int *, CLIENT *);
extern  bool_t * abertura_100_svc(int *, struct svc_req *);
#define FECHAMENTO 2
extern  bool_t * fechamento_100(int *, CLIENT *);
extern  bool_t * fechamento_100_svc(int *, struct svc_req *);
#define AUTENTICA 3
extern  int * autentica_100(int *, CLIENT *);
extern  int * autentica_100_svc(int *, struct svc_req *);
#define TRANSACAO 4
extern  bool_t * transacao_100(TransactionInfo *, CLIENT *);
extern  bool_t * transacao_100_svc(TransactionInfo *, struct svc_req *);
#define CONSULTA 5
extern  int * consulta_100(int *, CLIENT *);
extern  int * consulta_100_svc(int *, struct svc_req *);
extern int bank_100_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ABERTURA 1
extern  bool_t * abertura_100();
extern  bool_t * abertura_100_svc();
#define FECHAMENTO 2
extern  bool_t * fechamento_100();
extern  bool_t * fechamento_100_svc();
#define AUTENTICA 3
extern  int * autentica_100();
extern  int * autentica_100_svc();
#define TRANSACAO 4
extern  bool_t * transacao_100();
extern  bool_t * transacao_100_svc();
#define CONSULTA 5
extern  int * consulta_100();
extern  int * consulta_100_svc();
extern int bank_100_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_Conta (XDR *, Conta*);
extern  bool_t xdr_TransactionInfo (XDR *, TransactionInfo*);

#else /* K&R C */
extern bool_t xdr_Conta ();
extern bool_t xdr_TransactionInfo ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_BANK_H_RPCGEN */
