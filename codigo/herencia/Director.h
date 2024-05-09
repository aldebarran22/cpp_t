/**
 * Project Untitled
 */


#ifndef _DIRECTOR_H
#define _DIRECTOR_H

#include "Empleado.h"


class Director: public Empleado {
public: 
    
/**
 * @param nombre
 * @param apellidos
 * @param codigo
 * @param sueldo
 * @param paga
 * @param objetivos
 */
void Director(string nombre, string apellidos, int codigo, double sueldo, double paga, double objetivos);
protected: 
    
void Director();
private: 
    double paga;
    double objetivos;
};

#endif //_DIRECTOR_H