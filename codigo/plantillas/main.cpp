#include <iostream>
#include <string>
#include <cstring>

#include "Direccion.h"
#include "Persona.h"


template <class T> T menor(T a, T b){
	return (a < b) ? a : b;
}

const char *menor(const char *s1, const char *s2){
	if (std::strcmp(s1, s2) < 0)
		return s1;
	else
		return s2;
}

int main(int argc, char** argv) {
	Direccion dir("Gran Via");
	Persona p("Jorge", 32, 1.77, dir);	
	Persona p2("Ana", 33, 1.77, dir);
	
	const char *ptr1 = "Ana";
	const char *ptr2 = "ana";

	
	std::cout << "menor int: " << menor(34,55) << std::endl;
	std::cout << "menor string: " << menor(std::string("Ana"),std::string("ana")) << std::endl;
	std::cout << "menor Persona: " << menor(p, p2) << std::endl;
	std::cout << "menor const char *: " << menor(ptr1, ptr2) << std::endl;
	
	
	return 0;
}