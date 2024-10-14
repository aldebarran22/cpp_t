/* Cajero */

#include <stdio.h>


int main(){
	int importe;
	int i;
	int correcto = 0;
	int numBilletes;
	
	for (i = 0 ; i < 3 ; i++){
		printf("teclear importe: ");
		scanf("%d", &importe);
		if (importe % 10 != 0)
			puts("Importe incorrecto, teclear un multiplo de 10");
		else {
			correcto = 1;
			break;
		}			
	}
	
	if (correcto == 1){
		puts("El desglose de billetes es:");
		
		if (importe >= 50){
			numBilletes = importe / 50;
			importe %= 50;
			printf("Billetes de 50: %d\n", numBilletes);
		}
		
		if (importe >= 20){
			numBilletes = importe / 20;
			importe %= 20;
			printf("Billetes de 20: %d\n", numBilletes);
		}
		
		if (importe >= 10){
			numBilletes = importe / 10;
			importe %= 10;
			printf("Billetes de 10: %d\n", numBilletes);
		}
		
	} else {
		puts("No dispone de mas intentos");
	}
	return 0;
}
