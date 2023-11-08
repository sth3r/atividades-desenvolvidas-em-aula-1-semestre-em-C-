#include <stdio.h>

main(){
	int c[100], i, a, q;
	
	c[0]=0; q=0;
	
	printf("Informe um valor: ", a);
	scanf("%d", &a);
	for(i=0; i<=99; i++){
		printf("Informe o valor %d=", i+1);
		scanf("%d", &c[i]);
		if (c[i]==a){q++;}
	}

	if (q>0){printf("ACHEI!");}
	else{printf("NAO ACHEI!");}
}
