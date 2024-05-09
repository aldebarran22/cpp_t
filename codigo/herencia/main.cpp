#include <iostream>

#include "Empleado.h"
#include "Director.h"


int main(int argc, char** argv) {
	
	Empleado emp("Juan", "Gomez", 123343, 2000.0);
	std::cout << emp << std::endl;
	
	Director dir("Eva", "Sanz", 445949, 3000.0, 500.0, 1000.0);
	std::cout << dir << std::endl;
		
	
	return 0;
}
