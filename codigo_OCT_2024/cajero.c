/* Cajero */

#include <stdio.h>


int main(){
	int importe;
	int i;
	int correcto = 0;
	
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
		
	} else {
		puts("No dispone de mas intentos");
	}
	return 0;
}
