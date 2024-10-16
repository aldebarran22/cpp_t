// Arrays en C:

#include <stdio.h>

#define N 15

int main(){
	int numeros[N] = {0};
	int numeros2[] = {1,2,3,4,5};
	int numeros3[10] = {0,1,2}; // El resto se inicializan a cero.
	
	
	// Calcular el numero de elementos del array:
	int n, i;
	
	n = sizeof(numeros2) / sizeof(int);
	for (i = 0 ; i < n ; i++){
		printf("i = %d, num = %d\n", i, numeros2[i]);
	}
	
	// En C el nombre del array es un puntero al primer elemento:
	printf("numeros2 = %p, primer elemento: %d, primer elemento: %d\n", numeros2, *numeros2, numeros2[0]);
	
	return 0;
}
