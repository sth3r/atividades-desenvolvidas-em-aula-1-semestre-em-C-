#include <stdio.h>
#include <math.h>

void potencia (float b, int e){
	float r;
	
	r= pow (b,e);
	printf ("	%2.f ^ %d = %2.f",b, e, r);
}

main(){
	float b;
	int e;
	
	printf("Informe a base: "); scanf("%f",&b);
	printf("Informe o expoente: "); scanf("%d",&e);
	
	while (e<1){printf("Informe o expoente: "); scanf("%d",&e);}
	if (e>=1){potencia(b,e);}
	
	printf("\n\n");
}
