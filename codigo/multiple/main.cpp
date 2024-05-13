#include <iostream>
#include <map>

#include "Time.h"
#include "TimeException.h"
#include "DateTime.h"
#include "DateTime2.h"


void testDateTime(){
	DateTime dt(10, 5, 2024,18, 7, 20);
	std::cout << "DT: " << dt.toString() << std::endl;
	
	DateTime2 dt2(10, 5, 2024,18, 7, 20);
	std::cout << "DT: " << dt2.toString() << std::endl;
}

void testTime(){
	
	try {
		Time t(12,45, 45);
		std::cout << t.toString() << std::endl;
		
		t.setMM(100);
		std::cout << t.toString() << std::endl;
			
	} catch (TimeException &e){
		
	//} catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}		
}

void testDate(){
	Date f1(13,5,2024);  // 20240513
	Date f2(20,5,2024);  // 20240520
	std::map<Date, std::string> mapa;
	
	mapa[f1] = "Clase C++";
	
	
	
}

int main(int argc, char** argv) {
	//testTime();
	testDate();
	return 0;
}
