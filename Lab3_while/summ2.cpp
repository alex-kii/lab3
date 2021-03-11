#include "summ2.h"

double summ2(double eps) // Задание 2
{
	double s = 0;
	int i = 0;

	while (fabs(a(i)) > eps)
	{
		s += a(i);
		++i;
	}

	return s;
}