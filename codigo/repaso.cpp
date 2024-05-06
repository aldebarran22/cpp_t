#include <iostream>

// Tipos básicos: char, int, long, float, double

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
	}
}


int main(){
	tipoIntChar();
	return 0;
}
