// funciones

#include <stdio.h>


// Declaración de prototipos:
double sumar(double, double);


int main(){
	double a = 100, b = 93;
	double resul;
	
	resul = sumar(a,b);
	printf("Resul: %g", resul);
	
	return 0;
}

// Implementación de la función

double sumar(double n1, double n2){
	return n1+n2;
}
