#include "summ.h"

double summ(int n) // ������� 1
{
	double s = 0;
	int sch = 0;

	while (sch < n)
	{
		s += a(sch);
		++sch;
	}

	return s;
}