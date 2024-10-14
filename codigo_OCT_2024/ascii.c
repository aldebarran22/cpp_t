/* Tabla del codigo ascii */

#include <stdio.h>


int main(){
	unsigned char letra;
	
	// for (inicializacion ; condicion ; incrementos)
	
	for (letra = 0 ; letra <= 255 ; letra++){
		printf("%03d : %c\n", letra, letra);
	}
	
	return 0;
}
