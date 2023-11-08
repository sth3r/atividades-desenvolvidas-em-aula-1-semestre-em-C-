#include <stdio.h>

main(){
	int c[10], i;
	
	c[0]=0;
	for (i=0; i<=9; i++){
		printf("Informe o valor [%d]=", i);
		scanf("%d", &c[i]);
		if (c[i]<0){c[i]=100;}
	}
	
	for (i=0; i<=9; i++){
		printf("\n%d", c[i]);
	}
	
}
