#include <sstream>

#include "funciones.h"

std::string join(std::vector<int> tokens, char sep)
{
	// Partimos: {34, 11, 11, 44} --> "34;11;11;44"
	
	std::string cad = "";
	for (int i = 0 ; i < tokens.size() ; i++){
		cad += std::to_string(tokens.at(i));
		
		if (i < tokens.size()-1){
			cad+=sep;
		}
	}
	
	return cad;
}

std::vector<int> split(std::string cad, char sep)
{
	std::vector<int> numeros;
	std::istringstream is(cad);
	std::string snum;
	int numero;
	
	while (std::getline(is, snum, sep)){
		numero = std::stoi(snum);
		numeros.push_back(numero);
	}
	return numeros;
		
}
