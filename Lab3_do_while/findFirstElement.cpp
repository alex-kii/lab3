#include "findFirstElement.h"

int findFirstElement(double eps) // Задание 4
{
	int num = 0, sch = 0;

	do
	{
		if (fabs(a(sch)) <= eps) {
			num = sch;
			break;
		}
		++sch;
	} while (true);

	return num;
}