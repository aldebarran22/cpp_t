// Date.cpp: implementation of the Date class.
//
//////////////////////////////////////////////////////////////////////

#include "Date.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Date::Date(){
	this->dd = this->mm = this->aa = 0;
}

Date::Date(int d, int m, int a) {
	this->dd = d;
	this->mm = m;
	this->aa = a;
}


string Date::toString() const {
	char s[50];
	string fecha;  // 23/10/2024

	sprintf(s, "%02d/%02d/%04d", dd, mm, aa);  // 05/01/2025  
	fecha = s;
	return fecha;
}


Date::~Date(){}
