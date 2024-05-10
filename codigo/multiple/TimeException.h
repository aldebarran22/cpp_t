#ifndef TIMEEXCEPTION_H
#define TIMEEXCEPTION_H

#include <stdexcept>
#include <string>

class TimeException : public std::exception 
{
	
	std::string mensaje;
	
	public:
		TimeException(std::string);
		const char *what() const throw(){ return mensaje.c_str(); }
		~TimeException();
	protected:
};

#endif
