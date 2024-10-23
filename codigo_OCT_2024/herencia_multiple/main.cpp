#include <iostream>

#include "DateTime.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	DateTime dt(23,10,2024, 20,49, 24);
	std::cout << "DT: " << dt.toString() << std::endl;
	//std::cout << "Horas: "<< dt.getHH() << std::endl;
	return 0;
}
