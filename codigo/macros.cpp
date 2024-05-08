
// Prueba con las macros

#include <iostream>
#include <string>

#define PATH "C:\\mis documentos"
#define MENOR(a,b) ((a)<(b)?(a):(b))


int main(){
	std::string c1 = "Ana";
	std::string c2 = "Jorge";
	
	int n1 = 56, n2 = 40;
	int r1 = MENOR(n1,n2);
	std::string cad = MENOR(c1,c2);
	
	std::cout << "entero menor: " << r1 << std::endl;
	std::cout << "string menor: " << cad << std::endl;
	
	return 0;
}
