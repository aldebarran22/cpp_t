
#ifndef FUNCIONES_AMIGAS_H

#define FUNCIONES_AMIGAS_H

#include <iostream>

class Persona;
bool operator==(const Persona &, const Persona &);

class Direccion;
std::ostream & operator<<(std::ostream &, const Direccion &);

#endif
