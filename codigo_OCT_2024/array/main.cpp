#include <iostream>

#include "Vector.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Vector v1;
	
	v1.push(34);
	v1.push(44);
	v1.push(23);
	
	//Vector v2(v1); // Utilizar el constructor copia.
	
	v1.print();
	//v2.print();
	
	return 0;
}
