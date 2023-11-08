#include <stdio.h>

void calculo(float n1, float n2, int p){
	float m;
	
	m=(n1+n2)/2;
	
	if(m>=7&&p>=75) {printf("\nMedia: %2.f	%d%% frequencia(Aprovado)",m,p);}
	else{printf("\nMedia: %2.f	%d%% frequencia(Reprovado)",m,p);}
}

main(){
	float r1, r2, n1, n2;
	int r3, p;
	
	printf("Informe a primeira nota do aluno: "); scanf ("%f",&r1);
	if(r1>0&&r1<11){n1=r1;}
	printf("Informe a segunda nota do aluno: "); scanf ("%f",&r2);
	if(r1>0&&r1<11){n2=r2;}
	
	printf("Informe a porcentagem  de presenca do aluno: "); scanf ("%d",&r3);
	if(r1>0&&r1<101){p=r3;}
	
	calculo (n1, n2, p);
}
