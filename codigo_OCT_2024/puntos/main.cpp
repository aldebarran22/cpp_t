#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include "Punto2D.h"

int main(int argc, char** argv) {
	const Punto2D p;
	Punto2D r, suma;
	Punto2D q(-1, 7);
	
	std::cout << "p: " <<  p.to_string() << " q: "  << q.to_string() << std::endl;
	
	q.desplazar(2);
	std::cout << "p: " <<  p.to_string() << " q.desplazar(2): "  << q.to_string() << std::endl;
	
	r = q.desplazarCopia(3);
	
	std::cout << "r = q.desplazarCopia(3): " <<  r.to_string() << " q: "  << q.to_string() << std::endl;
	
	float distancia = p.calcularDistancia(r);
	std::cout << "Dist: " << distancia << std::endl;
	
	
	//std::cout << "p: " << p << std::endl;	
	suma = r + q; // Se traduce a: r = p.operator+(q);
	std::cout << "r: " <<  r.to_string() << " q: "  << q.to_string() << " suma: " << suma.to_string() << std::endl;
	
	
	//if (p == q){}
	
	return 0;
}
