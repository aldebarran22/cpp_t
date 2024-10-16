// Punteros

#include <stdio.h>

int main(){
	int numero = 100;
	int *ptr = NULL; // *ptr = 0;
	
	// Extraer la dir. de memoria de una variable
	ptr = &numero;
	*ptr = *ptr * 10; // Acceso al numero a traves del puntero.
	printf("ptr = %p, *ptr = %d, numero = %d\n", ptr, *ptr, numero);
	
	return 0;
}
