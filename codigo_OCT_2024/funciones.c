// funciones

#include <stdio.h>

double sumar(double n1, double n2){
	return n1+n2;
}


int main(){
	double a = 100, b = 93;
	double resul;
	
	resul = sumar(a,b);
	printf("Resul: %g", resul);
	
	return 0;
}
