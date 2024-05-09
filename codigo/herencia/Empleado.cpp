/**
 * Project Untitled
 */


#include "Empleado.h"

/**
 * Empleado implementation
 */


/**
 * @param nombre
 * @param apellidos
 * @param codigo
 * @param sueldo
 */
Empleado::Empleado(string nombre, string apellidos, int codigo, double sueldo) {
	this->nombre=nombre;
	this->apellidos = apellidos;
	this->codigo = codigo;
	this->sueldo = sueldo;	
}

/**
 * @param tabla
 * @return void
 */
void Empleado::subirSueldo(TablaBaremos tabla) {
    return;
}

string Empleado::cv() const
{
	return "CV del empleado";
}

ostream & operator<<(ostream &os, const Empleado &e)
{
	return os << e.nombre << " " << e.apellidos << " " << e.codigo << " " << e.sueldo;
}

Empleado::~Empleado() {

}
