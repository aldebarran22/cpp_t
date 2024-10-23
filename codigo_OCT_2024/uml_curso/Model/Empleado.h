/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include <string>
using namespace std;

#include "Persona.h"


class Empleado: public Persona {
public: 
    
/**
 * @param nombre
 * @param peso
 * @param altura
 * @param empresa
 * @param sueldo
 */
Empleado(string nombre, float peso, float altura, string empresa, float sueldo);
    
string to_string();
protected: 
    string empresa;
    float sueldo;
};

#endif //_EMPLEADO_H
