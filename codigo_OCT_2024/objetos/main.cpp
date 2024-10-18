#include <iostream>

#include "Persona.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Persona p1("Pedro", 77, 1.8);
	
	std::cout << "Pruebas clase Persona: " << std::endl;
	std::cout << p1.to_string() << std::endl;
	return 0;
}
