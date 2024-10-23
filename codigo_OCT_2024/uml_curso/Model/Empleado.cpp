/**
 * Project Untitled
 */


#include "Empleado.h"

/**
 * Empleado implementation
 */


/**
 * @param nombre
 * @param peso
 * @param altura
 * @param empresa
 * @param sueldo
 */																														// att(param)	
Empleado::Empleado(string nombre, float peso, float altura, string empresa, float sueldo):Persona(nombre, peso, altura), empresa(empresa),sueldo(sueldo) {

}

/**
 * @return string
 */
string Empleado::to_string() {
    return Persona::to_string() + " " + this->empresa + " " + to_string(this->sueldo);
}
