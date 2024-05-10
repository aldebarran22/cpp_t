#ifndef DATETIME2_H
#define DATETIME2_H

#include <string>
using namespace std;

#include "Date.h"
#include "Time.h"

class DateTime2
{
	Date date;
	Time time;
	
	public:
		DateTime2(int=0, int=0, int=0, int=0, int=0, int=0);
		DateTime2(Date, Time);
		string toString() const;
		~DateTime2();
	protected:
};

#endif
