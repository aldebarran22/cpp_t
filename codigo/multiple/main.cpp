#include <iostream>

#include "DateTime.h"
#include "DateTime2.h"

int main(int argc, char** argv) {
	DateTime dt(10, 5, 2024,18, 7, 20);
	std::cout << "DT: " << dt.toString() << std::endl;
	
	DateTime2 dt2(10, 5, 2024,18, 7, 20);
	std::cout << "DT: " << dt2.toString() << std::endl;
	return 0;
}
