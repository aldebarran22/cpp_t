// funciones

#include <stdio.h>


// Declaraci�n de prototipos:
double sumar(double, double);


int main(){
	double a = 100, b = 93;
	double resul;
	
	resul = sumar(a,b);
	printf("Resul: %g", resul);
	
	return 0;
}

// Implementaci�n de la funci�n

double sumar(double n1, double n2){
	return n1+n2;
}
