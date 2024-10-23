/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H

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
void Empleado(string nombre, float peso, float altura, string empresa, float sueldo);
    
string to_string();
protected: 
    string empresa;
    float sueldo;
};

#endif //_EMPLEADO_H