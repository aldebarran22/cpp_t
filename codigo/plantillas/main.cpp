#include <iostream>
#include <string>
#include <cstring>
#include <vector>

#include "Direccion.h"
#include "Persona.h"
#include "Lista.h"


/*
int *reservar(int n){
	return new int[n];
}*/

template <class T> T *reservar(int n){
	return new T[n];
}

template <class T> T menor(T a, T b){
	return (a < b) ? a : b;
}

const char *menor(const char *s1, const char *s2){
	if (std::strcmp(s1, s2) < 0)
		return s1;
	else
		return s2;
}

template <class T> std::vector<T> menor(std::vector<T> a, std::vector<T> b)
{
	return (a < b) ? a : b;
}

void testFunciones(){
	Direccion dir("Gran Via");
	Persona p("Jorge", 32, 1.77, dir);	
	Persona p2("Ana", 33, 1.77, dir);
	
	const char *ptr1 = "Ana";
	const char *ptr2 = "ana";
	
	std::vector<int> v1 = {3,4,5,6,11};
    std::vector<int> v2 = {7,8,9,10,10};

	
	std::cout << "menor int: " << menor(34,55) << std::endl;
	std::cout << "menor string: " << menor(std::string("Ana"),std::string("ana")) << std::endl;
	std::cout << "menor Persona: " << menor(p, p2) << std::endl;
	std::cout << "menor const char *: " << menor(ptr1, ptr2) << std::endl;
	
	std::vector<int> min = menor(v1, v2);
	for (auto i : min)
		std::cout << i << " ";
	std::cout << std::endl;
	
	int *ptr = reservar<int>(10);
	std::cout << "ptr int: " << ptr << std::endl;
	delete ptr;
	
	double *ptr3 = reservar<double>(10);
	std::cout << "ptr double: " << ptr3 << std::endl;
	delete ptr3;
}

void testClases(){
	Lista<int> L1;
	
	for (int i = 1 ; i <= 10 ; i++)
		L1.insertar(i);
		
	L1.imprimir();
}

int main(int argc, char** argv) {
	// testFunciones();
	testClases();
	return 0;
}
