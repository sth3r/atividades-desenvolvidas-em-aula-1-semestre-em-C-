#include <stdio.h>

main(){
	int x[10], r[10], i, a;
	
	for(i=0; i<=9; i++){
		printf("Informe o valor do vetor %d = ", i);
		scanf("%d", &x[i]);
	}
	
	for(i=0; i<=9; i++){
		if(x[i]<0){
			r[a]=x[i];
			a++;
		}
	}
	
	for (i=0; i<a; i++){
		printf("vetor R[%d] = %d\n", i, r[i]);
	}
}
