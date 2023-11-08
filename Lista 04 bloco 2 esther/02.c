#include <stdio.h>
#include <string.h>

main(){
	char mensagem[100], nome[20];
	int resp, b, a, e, i, o, u, idade, pessoa, resp2, tam;
	
	a=0; e=0; b=0; o=0; u=0; pessoa=0; 
	do{	
		printf("Informe uma mensagem:\n");
		fgets(mensagem, 100, stdin);
	
		printf("1.Vogais\n2.Inverso\n3.Idade\n4.Sair\n");
		scanf("%d",&resp);	
				
		scanf("%c");
		
		if(resp==1){
			for (i=0; mensagem[i]!='\0'; i++){
				if(mensagem[i]=='a'){a++;}
				if(mensagem[i]=='e'){e++;}
				if(mensagem[i]=='i'){b++;}
				if(mensagem[i]=='o'){o++;}
				if(mensagem[i]=='u'){u++;}
			}
			printf("a quantidade de cada vogal eh de \na=%d\ne=%d\ni=%d\no=%d\nu=%d\n\n", a, e, b, o, u);
		}
		if(resp==2){
			b=strlen(mensagem);
			for (i=b; i>=0; i--){
				printf("%c", mensagem[i]);
			}
			printf("\n");
			
		}
		if(resp==3){
			pessoa=0;
			do{pessoa++;
				printf("informe um nome: ");
				scanf("%s",nome);
				
				do{printf("Informe o sexo: 1.masculino 2.feminino: ");
					scanf("%d",&resp2);
				}while(resp2>=3);
				
				printf("informe a idade: ");
				scanf("%d",&idade);
			}while(pessoa<=30);
			printf("\n\n");
		}
	}while(resp<4);	
}
