#include <stdio.h>
#include <string.h>

main(){
	char nome1[30], nome2[30], nome3[30];
	int i;
	
	printf("informe um nome: ");
	gets(nome1);
	printf("informe um nome: ");
	gets(nome2);
	printf("informe um nome: ");
	gets(nome3);
	
	
	if (nome1[0]<nome2[0]){
		if(nome2[0]<nome3[0]){
			printf("%s\n%s\n%s", nome1, nome2, nome3);
		}
		else {
			printf("%s\n%s\n%s", nome1, nome3, nome2);
		}
	}
	
	if (nome2[0]<nome1[0]){
		if(nome1[0]<nome3[0]){
			printf("%s\n%s\n%s", nome2, nome1, nome3);
		}
		else {
			printf("%s\n%s\n%s", nome2, nome3, nome1);
		}
	}
}
