#include "findFirstNegativeElement.h"

int findFirstNegativeElement(double eps) // Задание 5
{
	int num = 0;

	do
	{

		if (a(num) < 0 && fabs(a(num)) <= eps) {
			return num;
		}

		++num;
	} while (true);

	return num;
}