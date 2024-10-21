#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include "Punto2D.h"

int main(int argc, char** argv) {
	std::string texto;
	int escalar, escalar2;
	const Punto2D p;
	Punto2D r, suma, suma2;
	Punto2D q(-1, 7);
	
	std::cout << "Teclear texto: ";
	//std::cin >> texto; // OJO solo leer una palabra, si ponemos espacios corta la lectura.
	std::getline(std::cin, texto);
	std::cout << "Texto tecleado: " << texto << std::endl;
	
	std::cout << "p: " <<  p.to_string() << " q: "  << q.to_string() << std::endl;
	
	std::cout << "Teclear X e Y para un punto2D: ";
	std::cin >> r;
	std::cout << "El punto r es: " << r << std::endl;
	
	
	std::cout << "Teclear dos numeros enteros: ";
	std::cin >> escalar >> escalar2;
	q.desplazar(escalar);
	std::cout << "p: " <<  p.to_string() << " q.desplazar(" << escalar << ") "  << q.to_string() << std::endl;
	
	r = q.desplazarCopia(escalar2);
	
	std::cout << "r = q.desplazarCopia(" << escalar2 << ") " <<  r << " q: "  << q << std::endl;
	
	float distancia = p.calcularDistancia(r);
	std::cout << "Dist: " << distancia << std::endl;
	
	
	//std::cout << "p: " << p << std::endl;	
	
	suma = r + q; // Se traduce a: suma = r.operator+(q);
	suma2 = r.operator+(q);
	
	std::cout << "r: " <<  r.to_string() << " q: "  << q.to_string() << " suma: " << suma.to_string() << std::endl;
	std::cout << "suma2: " << suma2.to_string() << std::endl;
	
	
	if (suma == suma2){
		std::cout << "suma es igual que suma2" << std::endl;
	} else {
		std::cout << "suma es distinto a suma2" << std::endl;
	}
	
	
	std::cout << ((suma==suma2) ? "son iguales" : "son distintos") << std::endl;
	
	return 0;
}
