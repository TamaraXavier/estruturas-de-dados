#include <stdio.h>
#include <stdlib.h>
#include "pilhase.h"



int main() {
	int op, cod;
	PilhaSE p;
	Funcionario f;
	
	criaPilha(&p);
	do {
		printf("\n***********************************************************************");
		printf("\n0.Fim                         2.Exclui um funcionario                  \n");
		printf("\n1.Inclui um funcionario       3.Consulta a existencia de um funcionario\n");
		printf("*************************************************************************\n");
		printf("\nOperacao: ");
		scanf("%d", &op);
		
		while(op < 0 || op > 3){
			printf("\nCODIGO INVALIDO...\n");
			printf("\nOperacao: ");
			scanf("%d", &op);
		}
		
		switch(op){
			case 1: printf("[CD] [Salario]\n");
				 	scanf("%d  %f", &f.cod, &f.salario);
				 	
				 	if(inclui(&p, f) == SUCESSO){
				 		printf("Incluido com sucesso!\n");
					 }
					 else{
					 	printf("Faltou Memória\n");
					 }
					 break;
					 
					 
	        case 2:	if(exclui(&p) == SUCESSO){
  					   printf("Excluido com Sucesso\n");
					}
					else{
						 printf("ERRO Lista vazia\n");
					 	}
	        			break;
	        	
	        	
        	case 3: printf("Informe o codigo de referencia: ");
        		 	scanf("%d", &cod);
        		 	
        		 	if(consulta(&p, f, cod) == SUCESSO){
        		 		printf("Consulta feita com sucesso\n");
					 }
					 else{
					 	printf("Codigo Inexistente\n");
					 }
        		break;
		
		
		}
		exibe(p); 
	} while (op != 0);
	
	return 0;
}

