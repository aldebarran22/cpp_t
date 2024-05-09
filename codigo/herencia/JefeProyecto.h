/**
 * Project Untitled
 */


#ifndef _JEFEPROYECTO_H
#define _JEFEPROYECTO_H

#include "Empleado.h"
#include "Empleado.h"


class JefeProyecto: public Empleado, public Empleado {
public: 
    
/**
 * @param nombre
 * @param apellidos
 * @param codigo
 * @param sueldo
 * @param incentivos
 */
void JefeProyecto(string nombre, string apellidos, int codigo, double sueldo, double incentivos);
protected: 
    
void JefeProyecto();
private: 
    double incentivos;
};

#endif //_JEFEPROYECTO_H