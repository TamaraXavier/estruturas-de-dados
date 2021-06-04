#ifndef Pilhase_H
#define Pilhase_H

#define SUCESSO 0
#define PILHA_VAZIA 1
#define FALTOU_MEMORIA 2
#define CODIGO_INEXISTENTE 3

typedef struct {
 int cod;
 float salario;
} Funcionario;

typedef struct nodo Nodo;

struct nodo {
 Funcionario func;
 Nodo *prox;
};

typedef struct {
 Nodo *topo;
} PilhaSE;


void criaPilha(PilhaSE *p); //OK
int inclui(PilhaSE *p, Funcionario f); //OK
int exclui(PilhaSE *p); //OK
int consulta(PilhaSE *p, Funcionario f, int cod); //OK
int estaVazia(PilhaSE *p); //OK
void exibe(PilhaSE p); //OK

#endif

