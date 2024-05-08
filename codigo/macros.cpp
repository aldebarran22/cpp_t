
// Prueba con las macros

#include <iostream>
#include <string>

#define N 10
#define M 20

#define TOTAL N+M

#define PATH "C:\\mis documentos"
#define MENOR(a,b) ((a)<(b)?(a):(b))

typedef unsigned char TByte;


int main(){
	std::string c1 = "Ana";
	std::string c2 = "Jorge";
	
	int n1 = 56, n2 = 40;
	int r1 = MENOR(n1,n2);
	std::string cad = MENOR(c1,c2);
	
	std::cout << "entero menor: " << r1 << std::endl;
	std::cout << "string menor: " << cad << std::endl;
	
	int a = 10, b = 20;
	
	int resul = MENOR(a++,b++);
	
	std::cout << "a: " << a << " b: " << b << std::endl;
	
	TByte b1 = 0xFF;
	
	return 0;
}
