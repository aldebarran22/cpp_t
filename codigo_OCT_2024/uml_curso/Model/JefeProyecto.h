/**
 * Project Untitled
 */


#ifndef _JEFEPROYECTO_H
#define _JEFEPROYECTO_H

#include "Empleado.h"


class JefeProyecto: public Empleado {
public: 
    
/**
 * @param nombre
 * @param peso
 * @param altura
 * @param empresa
 * @param sueldo
 */
void JefeProyecto(string nombre, float peso, float altura, string empresa, float sueldo);
    
string to_string();
protected: 
    vector<Empleado> programadores;
};

#endif //_JEFEPROYECTO_H