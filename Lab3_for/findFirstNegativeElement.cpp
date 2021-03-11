#include "findFirstNegativeElement.h"

int findFirstNegativeElement(double eps) // Задание 5
{
	int num = 0;

	for (num; true; num++)
	{

		if (a(num) < 0 && fabs(a(num)) <= eps) {
			return num;
		}

	}

	return num;
}