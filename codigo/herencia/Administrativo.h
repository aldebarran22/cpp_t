/**
 * Project Untitled
 */


#ifndef _ADMINISTRATIVO_H
#define _ADMINISTRATIVO_H

#include "Empleado.h"


class Administrativo: public Empleado {
public: 
    
/**
 * @param nombre
 * @param apellidos
 * @param codigo
 * @param sueldo
 * @param paga1
 * @param paga2
 */
void Administrativo(string nombre, string apellidos, int codigo, double sueldo, double paga1, double paga2);
protected: 
    
void Administrativo();
private: 
    double paga1;
    double paga2;
};

#endif //_ADMINISTRATIVO_H