
#include <map>
#include <iostream>
#include <string>


int main(){
	std::map<int, std::string> mapa = {{100, "Lunes"} , {200, "Martes"}, {300, "Miercoles"}};
	std::map<int, std::string>::iterator it;
	
	for (it = mapa.begin() ; it != mapa.end() ; it++){
		std::cout << it->first << "  " << it->second << std::endl;		
	}
	std::cout << mapa.at(200) << std::endl;		
	
	
	return 0;
	
}
