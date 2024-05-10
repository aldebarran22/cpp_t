#include "DateTime2.h"

		
DateTime2::DateTime2(int dd, int mm, int yy, int H, int M, int S)
{
	this->date = Date(dd,mm,yy);
	this->time = Time(H, M, S);
}

DateTime2::DateTime2(Date d, Time t): date(d), time(t)
{
	
}
		
string DateTime2::toString() const
{
	return this->date.toString() + " " + this->time.toString();
}

DateTime2::~DateTime2()
{
}
