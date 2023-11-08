#include <stdio.h>

main(){
	int v[8], i, a;
	
	v[0] = 5;
	v[1] = 1;
	v[2] = 4;
	v[3] = 2;
	v[4] = 7;
	v[5] = 8;
	v[6] = 3;
	v[7] = 6;
	
	for(i=8; i>=5; i--){
		a = v[1];
		v[i] = v[8-i+1];
		v[8-i+1] = a;	
	}
	
	v[3] = v[1];
	v[ v[3] ] = v[ v[2]];
	
	printf ("%d\n",v[3]);
	printf ("%d",v[ v[3] ]);
}
