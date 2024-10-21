#include <iostream>

#include "Vector.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Vector v1(15);
	Vector v3;
	const int *p;
	int *p2;
	
	v1.push(34);
	v1.push(44);
	v1.push(23);
	
	Vector v2(v1); // Utilizar el constructor copia.
	v3 = v1;
	
	
	v1.print();
	v2.print();
	v3.print();
	
	p = v1.getPtr();
	p2 = const_cast<int *>(p);  // const_cast<tipo_destino>(variable_origen) --> ANULA EL EFECTO DE CONST.
	p2[0] = 1000;
	
	v1.print();
	
	
	return 0;
}
