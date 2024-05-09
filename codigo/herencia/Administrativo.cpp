/**
 * Project Untitled
 */


#include "Administrativo.h"

/**
 * Administrativo implementation
 */


/**
 * @param nombre
 * @param apellidos
 * @param codigo
 * @param sueldo
 * @param paga1
 * @param paga2
 */
Administrativo::Administrativo(string nombre, string apellidos, int codigo, double sueldo, double paga1, double paga2):
Empleado(nombre, apellidos, codigo, sueldo) {
	this->paga1 = paga1;
	this->paga2 = paga2;
}


ostream & operator<<(ostream &os, const Administrativo &a)
{
	return os << "ADM:" << static_cast<Empleado>(a) << " " << a.paga1 << " " << a.paga2 << " " << a.cv();
}

string Administrativo::cv() const
{
	return "CV del Administrativo";
}

Administrativo::~Administrativo() {

}
