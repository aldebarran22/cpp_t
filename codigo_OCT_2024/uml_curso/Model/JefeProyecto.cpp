/**
 * Project Untitled
 */


#include "JefeProyecto.h"

/**
 * JefeProyecto implementation
 */


/**
 * @param nombre
 * @param peso
 * @param altura
 * @param empresa
 * @param sueldo
 */
JefeProyecto::JefeProyecto(string nombre, float peso, float altura, string empresa, float sueldo):Empleado(nombre,peso,altura,empresa,sueldo) {

}

void JefeProyecto::addEmpleado(Empleado *emp){
	this->programadores.push_back(emp);
}

/**
 * @return string
 */
string JefeProyecto::to_string() {
	string resul = "";
	
	for (Empleado *e : this->programadores){
		resul += e->to_string()+"\n";
	}
	
    return Empleado::to_string() +  "\n" + resul;
}

JefeProyecto::~JefeProyecto()
{
	for (Empleado *e : this->programadores){
		delete e;
		e = nullptr;
	}
}

