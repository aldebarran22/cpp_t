/**
 * Project Untitled
 */


#ifndef _ADMINISTRATIVO_H
#define _ADMINISTRATIVO_H

#include <string>
using namespace std;

#include "Empleado.h"


class Administrativo: public Empleado {
public: 
    
/**
 * @param nombre
 * @param peso
 * @param altura
 * @param empresa
 * @param sueldo
 * @param jefe
 */
Administrativo(string nombre, float peso, float altura, string empresa, float sueldo, Empleado jefe);
    
string to_string();

protected: 
    Empleado jefe;
};

#endif //_ADMINISTRATIVO_H
