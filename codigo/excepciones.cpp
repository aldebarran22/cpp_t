

#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

void testVector(){
	std::vector<int> v1 = {2,4,5,6,7,5,1};
	
	try {
		std::cout << "Vector []: " << v1[30] << std::endl;
		std::cout << "Vector at: " << v1.at(30) << std::endl;

	} catch (std::out_of_range &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

int main(){
	
	testVector();
	return 0;
}
