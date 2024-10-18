#include <iostream>

#include "Persona.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	std::cout << "Num Personas: " << Persona::getNumPersonas() << std::endl;
	
	Persona p1("Pedro", 77, 1.8);
	Persona p3;
	
	// Uso del constructor copia:
	Persona p2(p1);
	
	std::cout << "Num Personas: " << Persona::getNumPersonas() << std::endl;
	
	// Uso del operador = (asignación)
	p3 = p1;
	
	p1.engordar();
	
	std::cout << "Pruebas clase Persona: " << std::endl;
	std::cout << "p1: " << p1.to_string() << std::endl;
	
	p1.engordar(2.5);
	p1.setNombre("Lucas");
	
	std::cout << "p1: " << p1.to_string() << std::endl;
	std::cout << "p2: " << p2.to_string() << std::endl;
	std::cout << "p3: " << p3.to_string() << std::endl;
	return 0;
}
