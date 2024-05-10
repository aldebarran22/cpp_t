

#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

void testVector(){
	std::vector<int> v1 = {2,4,5,6,7,5,1};
	
	try {
		std::cout << "Vector []: " << v1[30] << std::endl;
		std::cout << "Vector at: " << v1.at(30) << std::endl;

	} catch (std::out_of_range &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

void testString(){
	std::string frase = "Cadena";
	
	try {
		std::cout << "Vector []: " << frase[30] << std::endl;
		std::cout << "Vector at: " << frase.at(30) << std::endl;

	} catch (std::exception &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

void testFuncion(int num)
{
	if (num < 0 || num % 2 != 0)
	{
		throw std::invalid_argument("El numero debe ser par y mayor que 0");
		
	} else {
		std::cout << "El numero es par...";
	}
}

void testOtrosTipos(int i)
{
	switch(i){
		case 0:
			throw 45;
			
		case 1:
			throw "mensaje de error";
			
					
	}
}

int main(){
	
	try {
		//testVector();
		//testString();
		//testFuncion(3);
		
		testOtrosTipos(1);
		
	} catch (std::exception &e){
		std::cerr << "Error: " << e.what() << std::endl;
		
	} catch (int &i){
		std::cerr << "Error: int " << i << std::endl; 
		
	} catch (const char *err){
		std::cerr << "Error: const char * " << err << std::endl; 
	}
	return 0;
}
