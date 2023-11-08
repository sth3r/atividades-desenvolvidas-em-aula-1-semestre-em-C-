#include <stdio.h>

main(){
	int w[10], i, z[10];
	
	w[0]=0;
	for (i=0; i<=9; i++){
		printf("Informe o valor %d=", i+1);
		scanf("%d", &w[i]);
		z[i]=w[i];
	}
	
	for (i=0; i<=9; i++){
		z[i]=10-i;
		printf("%d\n",z[i]);
	}
	
}
