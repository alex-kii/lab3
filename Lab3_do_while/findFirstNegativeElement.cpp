#include "findFirstNegativeElement.h"

int findFirstNegativeElement(double eps) // Задание 5
{
	int sch = 0;

	do
	{
		if (a(sch) < 0 && fabs(a(sch)) <= eps) {
			return sch;
		}
		++sch;
	} while (true);

	return sch;
}