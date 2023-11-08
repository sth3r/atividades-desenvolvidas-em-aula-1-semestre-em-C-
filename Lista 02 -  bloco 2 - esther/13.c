#include <stdio.h>

main(){
	int r[5], a, s[10], b, x[15], c;
	
	
	for(a=0; a<=4; a++){
		printf("Informe o valor do vetor R[%d] = ", a);
		scanf("%d", &r[a]);
	}
	for(b=0; b<=9; b++){
		printf("Informe o valor do vetor S[%d] = ", b);
		scanf("%d", &s[b]);
	}
	
	for (c=0; c<=14; c++){
		for (c=0; c<=4; c++){
			x[c] = r[a];
		}
		for (c=5; c<=15; c++){
			x[c] = s[b];
		}
	}
	
	for(c=0; c<=14; c++){
		printf("vetor X[%d] = %d\n", c, x[c]);
	}
}
