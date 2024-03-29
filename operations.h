/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _OPERATIONS_H_RPCGEN
#define _OPERATIONS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAXNAMELEN 255

typedef char *nametype;

typedef struct namenode *namelist;

struct name {
	nametype old;
	nametype final;
};
typedef struct name name;

struct namenode {
	nametype name;
	namelist next;
};
typedef struct namenode namenode;

struct readdir_res {
	int err;
	union {
		namelist list;
	} readdir_res_u;
};
typedef struct readdir_res readdir_res;

#define OPERATIONS 0x20000076
#define OPERATIONS_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define RENAME 1
extern  char * rename_1(name *, CLIENT *);
extern  char * rename_1_svc(name *, struct svc_req *);
#define MOVE 2
extern  char * move_1(name *, CLIENT *);
extern  char * move_1_svc(name *, struct svc_req *);
#define DELETE 3
extern  char * delete_1(nametype *, CLIENT *);
extern  char * delete_1_svc(nametype *, struct svc_req *);
#define CHANGEMODE 4
extern  char * changemode_1(nametype *, CLIENT *);
extern  char * changemode_1_svc(nametype *, struct svc_req *);
#define READDIR 5
extern  readdir_res * readdir_1(nametype *, CLIENT *);
extern  readdir_res * readdir_1_svc(nametype *, struct svc_req *);
#define AUTH 6
extern  char * auth_1(name *, CLIENT *);
extern  char * auth_1_svc(name *, struct svc_req *);
extern int operations_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define RENAME 1
extern  char * rename_1();
extern  char * rename_1_svc();
#define MOVE 2
extern  char * move_1();
extern  char * move_1_svc();
#define DELETE 3
extern  char * delete_1();
extern  char * delete_1_svc();
#define CHANGEMODE 4
extern  char * changemode_1();
extern  char * changemode_1_svc();
#define READDIR 5
extern  readdir_res * readdir_1();
extern  readdir_res * readdir_1_svc();
#define AUTH 6
extern  char * auth_1();
extern  char * auth_1_svc();
extern int operations_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_nametype (XDR *, nametype*);
extern  bool_t xdr_namelist (XDR *, namelist*);
extern  bool_t xdr_name (XDR *, name*);
extern  bool_t xdr_namenode (XDR *, namenode*);
extern  bool_t xdr_readdir_res (XDR *, readdir_res*);

#else /* K&R C */
extern bool_t xdr_nametype ();
extern bool_t xdr_namelist ();
extern bool_t xdr_name ();
extern bool_t xdr_namenode ();
extern bool_t xdr_readdir_res ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_OPERATIONS_H_RPCGEN */
