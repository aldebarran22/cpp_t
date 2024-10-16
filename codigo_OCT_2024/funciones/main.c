#include <stdio.h>
#include <stdlib.h>


#include "funciones.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// atof -> array to float
// atoi -> array to int

int main(int argc, char *argv[]) {
	double num1, num2;
	
	//puts(argv[0]);
	//printf("argc: %d, argv: %s", argc, argv[0]);
	
	if (argc == 1){
		printf("Dame numero1: ");
		scanf("%lf", &num1);

		printf("Dame numero2: ");
		scanf("%lf", &num2);
		
	} else if (argc == 2){
		puts("Se necesitan dos parametros");
		exit(-1);		
		
	} else {
		num1 = atof(argv[1]);
		num2 = atof(argv[2]);
	}	
	
	printf("suma: %lf\n", sumar(num1,num2));
	printf("resta: %lf\n", restar(num1,num2));
	
	return 0;
}
