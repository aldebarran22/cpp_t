/**
 * Project Untitled
 */


#ifndef _JEFEPROYECTO_H
#define _JEFEPROYECTO_H

#include <string>
using namespace std;

#include "Empleado.h"


class JefeProyecto: public Empleado {
public: 
    
/**
 * @param nombre
 * @param apellidos
 * @param codigo
 * @param sueldo
 * @param incentivos
 */
JefeProyecto(string nombre, string apellidos, int codigo, double sueldo, double incentivos);
protected: 
    
~JefeProyecto();
private: 
    double incentivos;
};

#endif //_JEFEPROYECTO_H
