/* Definición de variables y operaciones entre las variables */

#include <stdio.h>


int main(){
	int numero;
	unsigned char letra = 'A';
	
	
	printf("int ocupa %d bytes y un char %d bytes\n", sizeof(int), sizeof(char));
	
	letra++;
	printf("letra: %c, letra: %d, en minuscula: %c\n", letra, letra, letra+32);
	
	letra = 1000;
	printf("letra: %c %d\n", letra, letra);
	
	
	printf("numero = %d", numero);
	
	return 0;
}
