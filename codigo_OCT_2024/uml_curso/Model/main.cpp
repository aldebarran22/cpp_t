#include <iostream>

#include "Empleado.h"
#include "Administrativo.h"
#include "JefeProyecto.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Empleado prog1("Programador1", 70.0, 1.77, "CAS", 1800.0);
	
	
	Empleado jefe("Tomas", 90.0, 1.77, "CAS", 2300.0);
	Administrativo adm("Jose", 80.0, 1.8, "CAS", 1500.0, jefe);
	
	return 0;
}
