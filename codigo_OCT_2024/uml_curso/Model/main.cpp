#include <iostream>
using namespace std;

#include "Empleado.h"
#include "Administrativo.h"
#include "JefeProyecto.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Empleado prog1("Programador1", 70.0, 1.77, "CAS", 1800.0);
	Empleado prog2("Programador2", 76.0, 1.87, "CAS", 1800.0);
	Empleado prog3("Programador3", 79.0, 1.68, "CAS", 1800.0);
	
	Empleado jefe("Jefe", 90.0, 1.77, "CAS", 2300.0);
	Administrativo adm("administrativo", 80.0, 1.8, "CAS", 1500.0, jefe);
	
	JefeProyecto jp("Jefe de proyecto", 99.0, 1.9, "CAS",4500.0);
	jp.addEmpleado(prog1);
	jp.addEmpleado(prog2);
	jp.addEmpleado(prog3);
	jp.addEmpleado(adm);
	
	cout << jp.to_string() << endl;
	
	return 0;
}
