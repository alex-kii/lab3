#include "findFirstNegativeElement.h"

int findFirstNegativeElement(double eps) // Задание 5
{
	int num = 0;

	for (int i = 0; true; i++)
	{
		if (a(i) < 0 && fabs(a(i)) <= eps) {
			num = i;
			return num;
		}
	}

	return num;
}