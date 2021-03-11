#include "summ.h"

double summ(int n) // Задание 1
{
	double s = 0;
	int i = 0;

	if (n != 0) {

		do
		{
			s += a(i);
			++i;
		} while (i < n);

	}

	return s;
}