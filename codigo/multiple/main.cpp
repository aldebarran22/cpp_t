#include <iostream>


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

int main(int argc, char** argv) {
	testTime();
	return 0;
}
