#include "DateTime.h"

DateTime::DateTime(int dd, int mm, int yy, int H, int M, int S): Date(dd,mm,yy), Time(H,M,S)
{
}

DateTime::~DateTime()
{
}
