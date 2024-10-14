/* operaciones */

#include <stdio.h>

int main(){
	int a = 7;
	int b = 8;
	
	// Aplicamos un casting para ver el resultado en float.
	// %g quita los ceros que no valen
	printf("media: %g", (float)(a + b) / 2);
	
	
	// Operador %
	int importe = 230;
	int numBilletes50 = importe / 50;	
	importe = importe % 50;  // importe %= 50
	int numBilletes20 = importe / 20;
	
	// Operador ++ prefijo y postfijo
	a = 5;
	b = 6;
	
	a = ++b; // ++b;  a = b;
	
	a = 5;
	b = 6;
	a = b++;  // a = b;  b++;  
	
	
	return 0;
}
