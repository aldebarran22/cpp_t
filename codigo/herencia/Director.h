/**
 * Project Untitled
 */


#ifndef _DIRECTOR_H
#define _DIRECTOR_H

#include <string>
using namespace std;

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
Director(string nombre, string apellidos, int codigo, double sueldo, double paga, double objetivos);
protected: 
    
~Director();
private: 
    double paga;
    double objetivos;
};

#endif //_DIRECTOR_H
