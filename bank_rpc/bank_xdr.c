/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "bank.h"

bool_t
xdr_Conta (XDR *xdrs, Conta *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->cpf))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->saldo))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->transactionCount))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_TransactionInfo (XDR *xdrs, TransactionInfo *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, 4 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->cpf))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->valor))
				 return FALSE;
			 if (!xdr_bool (xdrs, &objp->operation))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->indentifier))
				 return FALSE;
		} else {
			IXDR_PUT_LONG(buf, objp->cpf);
			IXDR_PUT_LONG(buf, objp->valor);
			IXDR_PUT_BOOL(buf, objp->operation);
			IXDR_PUT_LONG(buf, objp->indentifier);
		}
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, 4 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->cpf))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->valor))
				 return FALSE;
			 if (!xdr_bool (xdrs, &objp->operation))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->indentifier))
				 return FALSE;
		} else {
			objp->cpf = IXDR_GET_LONG(buf);
			objp->valor = IXDR_GET_LONG(buf);
			objp->operation = IXDR_GET_BOOL(buf);
			objp->indentifier = IXDR_GET_LONG(buf);
		}
	 return TRUE;
	}

	 if (!xdr_int (xdrs, &objp->cpf))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->valor))
		 return FALSE;
	 if (!xdr_bool (xdrs, &objp->operation))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->indentifier))
		 return FALSE;
	return TRUE;
}
