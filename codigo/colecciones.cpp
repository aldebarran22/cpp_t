
#include <vector>
#include <map>
#include <string>
#include <iostream>


void testMapa(){
	std::map<int, std::string> mapa = {{121, "Jorge"}, {223, "Sonia"}, {445, "Ana"}, {11, "Julian"}};
	std::map<int, std::string>::iterator it;
	
	mapa.at(223) = "Sonia Sanz";
	mapa[199] = "Juan";
	
	// Recorrido con el iterador:
	for (it = mapa.begin(); it != mapa.end(); it++){
		std::cout << it->first << " " << it->second << std::endl;
		
	}
	
}

int main(){
	testMapa();
	return 0;
}



