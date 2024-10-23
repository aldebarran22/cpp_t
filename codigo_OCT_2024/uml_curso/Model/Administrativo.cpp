/**
 * Project Untitled
 */


#include "Administrativo.h"

/**
 * Administrativo implementation
 */


/**
 * @param nombre
 * @param peso
 * @param altura
 * @param empresa
 * @param sueldo
 * @param jefe
 */
Administrativo::Administrativo(string nombre, float peso, float altura, string empresa, float sueldo, Empleado jefe)
					:Empleado(nombre, peso, altura, empresa, sueldo), jefe(jefe) {
}

/**
 * @return string
 */
string Administrativo::to_string() {
    return Empleado::to_string() + " JEFE: " + this->jefe.to_string();
}
