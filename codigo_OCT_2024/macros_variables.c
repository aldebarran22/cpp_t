/* cALCULAR EL IVA DE UN PRODUCTO */

#include <stdio.h>

#define IVA 0.21

int main(){
	double precio = 120.0;
	double iva;
	double total;
	
	iva = precio * IVA;
	total = precio + iva;
	
	printf("precio = %5.2f, iva = %.2f, total = %.2f", precio, iva, total);
	return 0;
	
}
