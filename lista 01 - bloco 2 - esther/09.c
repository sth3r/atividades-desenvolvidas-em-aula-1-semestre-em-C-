#include <stdio.h>

main(){
	int b[10], i, x;
	
	b[0]=0; 
	
	for(i=0; i<=9; i++){
		printf("Informe o valor %d=", i+1);
		scanf("%d", &b[i]);
	}
	printf("Informe um valor: ", x);
	scanf("%d", &x);
	
	for(i=0; i<=9; i++){
		if (b[i]==x){
			printf("aparece na posicao: %d\n",i);
		}
	}
	
}
