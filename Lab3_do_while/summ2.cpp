#include "summ2.h"

double summ2(double eps) // ������� 2
{
	double s = 0;

	int sch = 0;

	do
	{
		s += a(sch);
		++sch;
	} while (fabs(a(sch)) > eps);

	return s;
}