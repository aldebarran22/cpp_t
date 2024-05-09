#include <iostream>
#include <vector>

#include "Empleado.h"
#include "Director.h"
#include "Administrativo.h"
#include "JefeProyecto.h"


void pruebas(){
	Empleado emp("Juan", "Gomez", 123343, 2000.0);
	std::cout << emp << std::endl;
	
	Director dir("Eva", "Sanz", 445949, 3000.0, 500.0, 1000.0);
	std::cout << dir << std::endl;
		
	JefeProyecto jf("Miguel", "Hernandez", 1234454, 1500.0, 125.0);
	std::cout << jf << std::endl;
	
	Administrativo adm("Paula","Sanz", 445566, 2500.0, 1000.0, 1000.0);
	std::cout << adm << std::endl;
	
	
	// Con una referencia:
	const Empleado &e1 = Administrativo("Paula","Sanz", 445566, 2500.0, 1000.0, 1000.0);
	std::cout << "Ref:" << e1.cv() << std::endl;
	
	// Con un puntero:
	Empleado *e2 = new Administrativo("Paula","Sanz", 445566, 2500.0, 1000.0, 1000.0);
	std::cout << "Ptr: " << e2->cv() << std::endl;
	delete e2;
	
	// Con un objeto
	Empleado e3 = Administrativo("Paula","Sanz", 445566, 2500.0, 1000.0, 1000.0);
	std::cout << "Obj: " << e3.cv() << std::endl;
}

void pruebasVector(){
	std::vector<int> numeros = {3,5,6,7,4,2,2};
	numeros.push_back(100);
	
	// Con auto: C++ infiere el tipo destino:
	for (auto & obj : numeros){ // Recorrer el vector y tomar una ref de cada int:
		obj *= 10;		
	}
	
	for (int obj : numeros){
		std::cout << obj << " ";
	}
	std::cout  << std::endl;
	
	std::vector<std::string> nombres = {"Ana","Jorge", "Maria","Andres"};
	nombres.push_back("Sandra");
	
	for (std::string nombre : nombres){
		
		std::cout << nombre << " ";
	}
	std::cout  << std::endl;	
}

void vectorEmpleados()
{
	std::vector<Empleado *> empleados;
	
	empleados.push_back(new Administrativo("Paula","Sanz", 445566, 2500.0, 1000.0, 1000.0));
	empleados.push_back(new Empleado("Juan", "Gomez", 123343, 2000.0));
	empleados.push_back(new Director("Eva", "Sanz", 445949, 3000.0, 500.0, 1000.0));
	empleados.push_back(new JefeProyecto("Miguel", "Hernandez", 1234454, 1500.0, 125.0));
	
	for (Empleado *emp : empleados)
	{
		std::cout << emp->cv() << std::endl;
	}
	
	for (Empleado  *emp : empleados){
		delete emp;
		emp = nullptr;
	}
	
}


void pruebasVector2()
{
	std::vector<int> numeros;
	
	for (int i = 0 ; i < 25 ; i++)
	{
		numeros.push_back(i);
		std::cout << "capacity: " << numeros.capacity() << " size: " << numeros.size() << std::endl;
	}
}

int main(int argc, char** argv) {
	
	//pruebas();
	//pruebasVector();
	//vectorEmpleados();
	pruebasVector2();
	
	return 0;
}
