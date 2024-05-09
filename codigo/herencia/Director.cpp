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

Director::~Director() {

}
