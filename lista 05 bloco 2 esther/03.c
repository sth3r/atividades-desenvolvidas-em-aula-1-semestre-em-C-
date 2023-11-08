#include <stdio.h>

void funcao(char ch){
	int r;
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {r=1;}
	else {r=0;}
	
	printf("%d\n", r);
}

main(){
	char ch;
	int c;
	
	for (c=1; c<=10; c++){
		printf ("(%d)informe um caractere: ",c); scanf("%c",&ch); scanf("%c");
		funcao(ch);
		printf("\n");
	}
}
