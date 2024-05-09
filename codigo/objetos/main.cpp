#include <iostream>
#include <climits>

#include "Persona.h"
#include "Direccion.h"
#include "Vector.h"


void testPersona(){
	Direccion dir("Gran Via");
	Persona p; // Llama al constructor por defecto	
	
	const Persona p2("Ana", 33, 1.77, dir);
	Persona p3(p2); // Salta el constructor copia!
	Persona p4 = p2;
	Persona *ptr = nullptr;
	
	p = p2; // Salta el operador =   p.operator=(p2)
	
	std::cout << "p: " << p.to_string() <<  std::endl;
	std::cout << "p2: " << p2.to_string() <<  std::endl;
	std::cout << "p3: " << p3.to_string() <<  std::endl;
	
	//p.edad++; OJO el atributo es privado solo se puede modificar desde la propia clase.
	//p2.setNombre("Ana Maria");
	p.setEdad(p.getEdad()+1);
	std::cout << "p: " << p.to_string() <<  std::endl;
	
	// Crear un objeto dinamicamente:
	ptr = new Persona("Alberto", 55, 1.78, Direccion("Callao", 45));
	std::cout << ptr->to_string() <<  std::endl;
	delete ptr;
	
	ptr = nullptr;
}


void testVector(){
	Vector v1(20);
	Vector v2(v1);
	Vector v3;
		
	
	for (int i = 0 ; i < 10 ; i++)
	{
		if (!v1.add(i*10))
			std::cout << "Array lleno ..." << std::endl;		
	}
	
	v3 = v1;
	
	v3.add(999);
	v3.add(1000);
	
	std::cout << "v3 Num elems: " << v3.len() << std::endl;
	v3.print();
	std::cout << std::endl;
	
	int *p;
	const int *ptr;
	
	ptr = v1.getPtr();
	p = const_cast<int *>(ptr);
	p[0] = 99999;
	
	
	std::cout << "v1 Num elems: " << v1.len() << std::endl;
	v1.print();
}

void testStatic(){
	std::cout << "contador: " << Persona::getContador() << std::endl;
	Persona p1;
	Persona p2;
	
	Direccion dir("Gran Via");	
	const Persona p("Ana", 33, 1.77, dir);
	
	Persona p3(p);
	
	std::cout << "contador: " << Persona::getContador() << std::endl;
}

void testOperadores()
{
	Direccion dir("Gran Via", 10);	
	Persona p("Ana", 35, 1.76, dir);
	
	Direccion dir2("Gran Via", 9);	
	Persona p2("Ana", 35, 1.76, dir2);
	
	std::cout << "Direccion: " << dir << std::endl;
	std::cout << "p: " << p << " p2: " << p2 << std::endl;
	
	if (p < p2){	
		std::cout << p.getNombre() <<  " es menor que " << p2.getNombre() << std::endl;
		
	} else if (p == p2) {
		std::cout << p2.getNombre() <<  " es igual a " << p.getNombre() << std::endl;
		
	} else {
		std::cout << " son distintos " << std::endl;
	}	
}

void testLeerEscribir()
{
	Direccion dir;
	std::string cadena;
		
	std::cout << "Teclear los datos de la direccion:";
	std::cin >> dir;
	std::cin.ignore(INT_MAX, '\n'); // Limpiar el buffer de teclado
	std::cout << "Direccion: " << dir << std::endl;
	
	
	std::cout << "Teclear una frase: ";
	std::getline(std::cin, cadena);
	std::cout << "Frase: " << cadena << std::endl;
}

int main(int argc, char** argv) {
	//testPersona();
	//testVector();
	//testStatic();
	//testOperadores();
	testLeerEscribir();
	return 0;
}
