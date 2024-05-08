#include <iostream>

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
	
	std::cout << "v1 Num elems: " << v1.len() << std::endl;
	v1.print();
}

void testStatic(){
	std::cout << "contador: " << Persona::getContador() << std::endl;
	Persona p1;
	Persona p2;
	
	Direccion dir("Gran Via");	
	const Persona p("Ana", 33, 1.77, dir);
	
	std::cout << "contador: " << Persona::getContador() << std::endl;
}

int main(int argc, char** argv) {
	//testPersona();
	//testVector();
	testStatic();
	return 0;
}
