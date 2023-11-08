#include <stdio.h>

main(){
	int b[10], i, j;
	
	b[0]=0;
	
	for (i=0; i<=9; i++){
		b[i] = b[0];
	}
	
	for (j=0; j<=9; j++){
		b[j] = b[i];
		if (b[j] % 2 == 0){ b[j]=0;}
		else { b[j]=1;}
		
		printf ("%d\n", b[j]);
	}
}
