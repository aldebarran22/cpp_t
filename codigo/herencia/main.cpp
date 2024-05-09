#include <iostream>

#include "Empleado.h"
#include "Director.h"
#include "Administrativo.h"
#include "JefeProyecto.h"


int main(int argc, char** argv) {
	
	Empleado emp("Juan", "Gomez", 123343, 2000.0);
	std::cout << emp << std::endl;
	
	Director dir("Eva", "Sanz", 445949, 3000.0, 500.0, 1000.0);
	std::cout << dir << std::endl;
		
	JefeProyecto jf("Miguel", "Hernandez", 1234454, 1500.0, 125.0);
	std::cout << jf << std::endl;
	
	Administrativo adm("Paula","Sanz", 445566, 2500.0, 1000.0, 1000.0);
	std::cout << adm << std::endl;
	
	return 0;
}
