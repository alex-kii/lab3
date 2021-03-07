#include "summ.h"

double summ(int n) // Задание 1
{
	double s = 0;

	int sch = 0;

	do
	{
		s += a(sch);
		++sch;
	} while (sch < n);

	return s;
}