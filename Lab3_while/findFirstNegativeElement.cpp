#include "findFirstNegativeElement.h"

int findFirstNegativeElement(double eps) // ������� 5
{
	int num = 0;

	while (true)
	{

		if (a(num) < 0 && fabs(a(num)) <= eps) {
			return num;
		}

		++num;
	}

	return num;
}