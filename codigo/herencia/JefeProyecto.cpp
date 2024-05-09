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

JefeProyecto::~JefeProyecto() {

}
