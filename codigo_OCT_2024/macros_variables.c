/* cALCULAR EL IVA DE UN PRODUCTO */

#include <stdio.h>

#define IVA 0.21

int main(){
	double precio = 120.56;
	double iva;
	double total;
	
	iva = precio * IVA;
	total = precio + iva;
	
	printf("precio = %f", precio);
	return 0;
	
}
