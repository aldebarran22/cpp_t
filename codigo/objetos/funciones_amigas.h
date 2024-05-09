
#ifndef FUNCIONES_AMIGAS_H

#define FUNCIONES_AMIGAS_H

#include <iostream>

class Persona;
bool operator==(const Persona &, const Persona &);
std::ostream & operator<<(std::ostream &, const Persona &);
std::istream & operator>>(std::istream &, Persona &); // Se quita const para poder modificar el objeto.

class Direccion;
std::ostream & operator<<(std::ostream &, const Direccion &);
std::istream & operator>>(std::istream &, Direccion &);

#endif
