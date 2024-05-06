#include <iostream>

// Tipos básicos: 
// char 1 byte, 
// short int 2 byte
// int 4 bytes
// long 4 bytes
// float, 
// double

void tipoIntChar(){
	char c = 'A';
	
	c+=3;
	std::cout << "letra: " <<  c << " ocupa: " << sizeof(c) << " byte" << std::endl;
	
	for (c = 'A' ; c <= 'Z' ; c++)
		std::cout << c;
		
	std::cout << std::endl;
	
	std::cout << "TABLA ASCII" << std::endl;
	for (unsigned char i = 0 ; i < 256 ; i++){
		std::cout << (int) i << " " <<  i << std::endl;
		
		if (i == 255) break;
	}
}

void sizeVars(){
		std::cout << "char: ocupa: " << sizeof(char) << " bytes" << std::endl;
		std::cout << "short int: ocupa: " << sizeof(short int) << " bytes" << std::endl;
		std::cout << "int: ocupa: " << sizeof(int) << " bytes" << std::endl;
		std::cout << "long: ocupa: " << sizeof(long) << " bytes" << std::endl;
		std::cout << "long long: ocupa: " << sizeof(long long) << " bytes" << std::endl;
		std::cout << "float: ocupa: " << sizeof(float) << " bytes" << std::endl;
		std::cout << "double: ocupa: " << sizeof(double) << " bytes" << std::endl;
}

int main(){
	//tipoIntChar();
	sizeVars();
	return 0;
}
