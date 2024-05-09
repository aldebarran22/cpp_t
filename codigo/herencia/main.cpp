#include <iostream>

#include "Empleado.h"


int main(int argc, char** argv) {
	
	Empleado emp("Juan", "Gomez", 123343, 2000.0);
	std::cout << emp << std::endl;
	
	return 0;
}
