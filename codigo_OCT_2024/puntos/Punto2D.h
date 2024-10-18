#ifndef PUNTO2D_H
#define PUNTO2D_H

#include <string>

class Punto2D
{
	int x, y;
	
	public:
		Punto2D();
		Punto2D(int, int);
		std::string to_string();
		~Punto2D();
	protected:
};

#endif
