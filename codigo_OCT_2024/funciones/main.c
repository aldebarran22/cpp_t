#include <stdio.h>


#include "funciones.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// atof -> array to float
// atoi -> array to int

int main(int argc, char *argv[]) {
	double num1, num2;
	
	printf("Dame numero1: ");
	scanf("%lf", &num1);

	printf("Dame numero2: ");
	scanf("%lf", &num2);
	
	printf("suma: %lf\n", sumar(num1,num2));
	printf("resta: %lf\n", restar(num1,num2));
	return 0;
}
