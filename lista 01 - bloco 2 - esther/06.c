#include <stdio.h>

main(){
	int d[10], i, e[10];
	
	d[0]=0;
	for (i=0; i<=9; i++){
		printf("Informe o valor %d=", i+1);
		scanf("%d", &d[i]);
		e[i]=d[i];
	}
	
	for (i=0; i<=9; i++){
		printf("d[%d] = %d\n",i, d[i]);
	}
	
	for (i=0; i<=9; i++){
		printf("e[%d] = %d\n",i, e[i]);
	}	
}
