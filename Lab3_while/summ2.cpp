#include "summ2.h"

double summ2(double eps) // ������� 2
{
	double s = 0;
	int sch = 0;

	while (fabs(a(sch)) > eps)
	{
		s += a(sch);
		++sch;
	}

	return s;
}