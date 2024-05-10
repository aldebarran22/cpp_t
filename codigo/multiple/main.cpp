#include <iostream>

#include "DateTime.h"


int main(int argc, char** argv) {
	DateTime dt(18, 7, 20, 10, 5, 2024);
	std::cout << "DT: " << dt.toString() << std::endl;
	return 0;
}
