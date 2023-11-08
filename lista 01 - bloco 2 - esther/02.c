#include <stdio.h>

main(){
	int m[10], i;
	
	m[0] = 2022;
	
	for(i=0; i<=9; i++){
		m[i] = m[0];
		printf ("m[%d] = %d\n",i, m[i]);	
	}
	
}
