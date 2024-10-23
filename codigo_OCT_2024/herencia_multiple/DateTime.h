#ifndef DATETIME_H
#define DATETIME_H

#include "Date.h"
#include "Time.h"

class DateTime : public Date, public Time
{
	public:
		DateTime(int=1, int=1, int=1970,int=0, int=0, int=0);		
		~DateTime();
	protected:
};

#endif
