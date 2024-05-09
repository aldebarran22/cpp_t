/**
 * Project Untitled
 */


#include "JefeProyecto.h"

/**
 * JefeProyecto implementation
 */


/**
 * @param nombre
 * @param apellidos
 * @param codigo
 * @param sueldo
 * @param incentivos
 */
JefeProyecto::JefeProyecto(string nombre, string apellidos, int codigo, double sueldo, double incentivos):
Empleado(nombre, apellidos, codigo, sueldo), incentivos(incentivos) {

}

ostream & operator<<(ostream &os, const JefeProyecto &jf)
{
	return os << "JF: " << static_cast<Empleado>(jf) << " " << jf.incentivos;
}

string JefeProyecto::cv() const
{
	return "CV del JefeProyecto";
}


JefeProyecto::~JefeProyecto() {

}
