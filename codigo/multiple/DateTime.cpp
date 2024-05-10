#include "DateTime.h"

DateTime::DateTime(int dd, int mm, int yy, int H, int M, int S): Date(dd,mm,yy), Time(H,M,S)
{
}

string DateTime::toString() const
{
	return Date::toString() + " " + Time::toString();
}

DateTime::~DateTime()
{
}
