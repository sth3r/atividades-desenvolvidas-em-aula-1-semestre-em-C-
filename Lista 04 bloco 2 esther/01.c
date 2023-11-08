#include <stdio.h>

main(){
	char time1[50], time2[50];
	int gols1, gols2;
	
	printf("informe o nome do primeiro time: ");
	gets(time1);
	printf("informe o nome do segundo time: ");
	gets(time2);
	
	printf("informe numero de gols: ", gols1);
	scanf("%d",&gols1);
	printf("informe numero de gols: ", gols2);
	scanf("%d",&gols2);
	
	if (gols1!=gols2){
		if(gols1>gols2){
			printf("o time vencedor foi o %s",time1);
		}
		else{
			printf("o time vencedor foi o %s",time2);
		}
	}
	else{printf("EMPATE");}
}
