#include <stdio.h>
#include <stdlib.h>
#include "pilhase.h"

void criaPilha(PilhaSE *p){
	p->topo = NULL;
	p = (PilhaSE *) malloc(sizeof(p));
}


int inclui(PilhaSE *p, Funcionario f){ //EMPILHA
	Nodo *novo;
	novo = (Nodo *) malloc(sizeof(novo));
	if(novo == NULL){
		return FALTOU_MEMORIA;
	}
	else{
		novo->func = f;
		novo->prox = p->topo;
		p->topo = novo;
		return (SUCESSO);	
	}
	
}

int exclui(PilhaSE *p){  //DESEMPILHA
	Nodo *t;
	Funcionario fc;
	
	if(estaVazia(p) == 1){
		return PILHA_VAZIA;
	}
	else{
		t = p->topo;
		fc = t->func;
		p->topo = t->prox;
		printf("Excluido: %d %.2f\n", t->func.cod, t->func.salario);
		free(t);
		return SUCESSO;
	}
}


int estaVazia(PilhaSE *p){
	if(p->topo == NULL){
		return 1;
	}
	else{
		return 0;
	}
}

int consulta(PilhaSE *p, Funcionario f, int cod){
	Nodo *cons = p->topo; 
	
	if(p->topo == NULL){
		return PILHA_VAZIA;
	}
	else{
		while(cons != NULL){
			if(cod == cons->func.cod){
				printf("Codigo informado: %d\n [COD]: %d [SALARIO]: %.2f\n", cod, cons->func.cod, cons->func.salario);
				return SUCESSO;
			}
			else{
				cons = cons->prox;
			}	
		}
		return CODIGO_INEXISTENTE;
	}	
}


void exibe(PilhaSE p){
     Nodo *pAux;
     pAux = p.topo;
     
	 printf("------------------------------------\n");
	 printf("\nTopo: %p \n", pAux);
  	 printf("\nEXIBINDO TODOS OS FUNCIONARIOS\n");
     printf("[EndNodo] [CD] [SALARIO] [EndProx]\n");
     	  while (pAux != NULL) {
     	    	printf("[%p] - %3d %.2f - [%p]\n", pAux, pAux->func.cod, pAux->func.salario, pAux->prox);
          		 pAux = pAux->prox;
	      }	
}
	
