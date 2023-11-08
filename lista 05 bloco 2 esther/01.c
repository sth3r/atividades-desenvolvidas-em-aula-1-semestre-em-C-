#include <stdio.h>

void somaValores (float a, float b, float c){
	float x;
		
	x = a*a + (b+c);
	printf("%.2f",x);
}

main(){
	float a, b, c;
	
	do{	printf("informe um valor: ");
		scanf("%f",&a);
		printf("informe um valor: ");
		scanf("%f",&b);
		printf("informe um valor: ");
		scanf("%f",&c);
		
		if (a>0 && b>0 && c>0);{}
			somaValores(a,b,c);
		
		printf("\n\n");
	}while (a>0 && b>0 && c>0);
}
