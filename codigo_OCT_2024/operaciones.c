/* operaciones */

#include <stdio.h>

int main(){
	int a = 7;
	int b = 8;
	
	// Aplicamos un casting para ver el resultado en float.
	// %g quita los ceros que no valen
	printf("media: %g", (float)(a + b) / 2);
	
	return 0;
}
