// Prueba de static en C

#include <iostream>

void funcion1(){
	int i = 0;
	
	i++;
	std::cout << "funcion1() i = " << i << std::endl;
}

void funcion2(){
	static int i = 0;
	
	i++;
	std::cout << "funcion1() i = " << i << std::endl;
}

int main(){
	for (int i = 0 ; i < 3 ; i++)
	{
		funcion1();
	}
	
	std::cout << std::endl;
	
	for (int i = 0 ; i < 3 ; i++)
	{
		funcion2();
	}
}




