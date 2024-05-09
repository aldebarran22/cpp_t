/**
 * Project Untitled
 */


#include "Director.h"

/**
 * Director implementation
 */


/**
 * @param nombre
 * @param apellidos
 * @param codigo
 * @param sueldo
 * @param paga
 * @param objetivos
 */
Director::Director(string nombre, string apellidos, int codigo, double sueldo, double paga, double objetivos):
Empleado(nombre, apellidos, codigo, sueldo), paga(paga), objetivos(objetivos) {}


ostream & operator<<(ostream &os, const Director &d)
{
	return os  << "DIR: " << static_cast<Empleado>(d) << " " << d.paga << " " << d.objetivos;
}

Director::~Director() {

}
