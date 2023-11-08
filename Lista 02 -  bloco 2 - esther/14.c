#include <stdio.h>

main(){
	
	int q[10], i, troca, aux;
	
	for(i=0; i<=9; i++){
		do{
			printf("Informe o valor do vetor R[%d] = ", i);
			scanf("%d", &q[i]);	
		}while(q[i]<0);
	}
		
	do {troca = 0;
		for (i=0; i<=8; i++){
			if (q[i] > q[i+1]){
				aux = q[i];
				q[i] = q[i+1];
				q[i+1] = aux;
				troca = 1;
				}
		}		
	} while (troca==1);
	
	printf("o maior valor é o valor %d da posicao Q[%d]", q[9]), i;
	
	}
