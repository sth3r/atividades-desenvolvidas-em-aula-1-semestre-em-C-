#include <stdio.h>

main(){
	int a[10], i, b;
	
	for (i=0; i<=9; i++){
		a[i] = a[0];	
	}
	
	for (b=1; b<=9; b++){
		a[b] = a[i];
		printf ("%d\n", a[b]);
	}
	
}
