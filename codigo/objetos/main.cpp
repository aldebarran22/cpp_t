#include <iostream>

#include "Persona.h"
#include "Direccion.h"


void testPersona(){
	Direccion dir("Gran Via");
	Persona p; // Llama al constructor por defecto
	Persona p2("Ana", 33, 1.77, dir);
	Persona *ptr = nullptr;
	
	std::cout << p2.to_string() <<  std::endl;
	
	// Crear un objeto dinamicamente:
	ptr = new Persona("Alberto", 55, 1.78, Direccion("Callao", 45));
	std::cout << ptr->to_string() <<  std::endl;
	delete ptr;
	
	ptr = nullptr;
}

int main(int argc, char** argv) {
	testPersona();
	return 0;
}
