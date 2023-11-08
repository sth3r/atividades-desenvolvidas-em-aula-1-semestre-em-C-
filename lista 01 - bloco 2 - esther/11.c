#include <stdio.h>

main(){
	int turma[10], i, a;
	float s, m;
	
	turma[0]=0; a=0; m=0; s=0;
	
	for(i=0; i<=9; i++){
		printf("Informe a nota do aluno %d = ", (i+1));
		scanf("%d", &turma[i]);
		s = s + turma[i];
	}
	
	m = s / 10;
	
	for(i=0; i<=9; i++){
		if(turma[i]>m){a++;}
	}
	
	printf("%d alunos tiveram a nota acima da media %.2f",a, m);
}
