#include <stdio.h>
#include <math.h>

void operacao (float b, float e){
	float r;
	
	r= pow (b,e);
	printf ("	%2.f ^ %2.f = %2.f",b, e, r);
}

main(){
	float b, e;
	
	while(e>0){
		printf("Informe a base: "); scanf("%f",&b);
		printf("Informe o expoente: "); scanf("%f",&e);
		
		if (e>0){
			operacao(b,e);
			printf("\n\n");
		}		
	}	
}
