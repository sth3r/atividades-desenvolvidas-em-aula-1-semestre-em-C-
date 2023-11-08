#include <stdio.h>

main(){
	int t[10], i, b, c;
	
	t[0]=0; c=0;
	
	for(i=0; i<=9; i++){
		printf("Informe o valor %d=", i+1);
		scanf("%d", &t[i]);
	}
	printf("Informe um valor: ", b);
	scanf("%d", &b);
	
	for(i=0; i<=9; i++){
		if(t[i]==b){c++;}
	}
	
	printf("o valor %d esta presente %d vezes no vetor t", b, c);
}
