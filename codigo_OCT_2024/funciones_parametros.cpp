// Paso de parámetros por copia y por puntero

#include <stdio.h>

void pasoPorCopia(int numero){
	numero++;
	printf("n en paso PorCopia: %d\n",numero);
}

void pasoPorPtr(int *ptr){
	*ptr = 200;
}

void pasoPorRef(int &ptr){
	ptr = 400;
}



int main(){
	int numero = 100;
	
	printf("numero: %d\n", numero);
	pasoPorCopia(numero);
	printf("numero: %d\n", numero);
	
	pasoPorPtr(&numero);
	printf("numero: %d\n", numero);
	
	pasoPorRef(numero);
	printf("numero: %d\n", numero);
	
	return 0;
}
