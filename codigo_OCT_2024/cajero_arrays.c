/* Cajero con array de billetes */

#include <stdio.h>

#define N 3


int main(){
	int importe;
	int i;
	int correcto;
	int numBilletes;
	int billetes[] = {50,20,10};

	
	while (1){
	
		correcto = 0;
		
		for (i = 0 ; i < 3 ; i++){
			printf("teclear importe: ");
			scanf("%d", &importe);
			
			if (importe % 10 != 0){
				
				if (i < 2)
					puts("Importe incorrecto, teclear un multiplo de 10");
				else
					puts("No dispone de mas intentos");
						
			} else {
				correcto = 1;
				break;
			}			
		}
		
		if (correcto == 1){
			puts("El desglose de billetes es:");
			
			for (i = 0 ; i < N ; i++){
				
				if (importe >= billetes[i]){
					numBilletes = importe / billetes[i];
					importe %= billetes[i];
					printf("Billetes de %d: %d\n", billetes[i], numBilletes);
				}
			}
				
		}
	}
		
	return 0;
}
