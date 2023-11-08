#include <stdio.h>

void exibeTabuada(int n){
	int c, x;
	
	for (c=0; c<=10; c++){
		x=c*n;
		printf ("%d x %d = %d\n",c, n, x);
	}	
}

main(){
	int n;
	
	printf("informe o valor desejado para multiplicacao: ");
	scanf("%d",&n);
	
	exibeTabuada(n);
}
