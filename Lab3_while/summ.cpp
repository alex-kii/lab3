#include "summ.h"

double summ(int n) // ������� 1
{
	double s = 0;
	int i = 0;

	while (i < n)
	{
		s += a(i);
		++i;
	}

	return s;
}