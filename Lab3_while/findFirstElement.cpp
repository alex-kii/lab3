#include "findFirstElement.h"

int findFirstElement(double eps) // ������� 4
{
	int sch = 0;

	while (true)
	{
		if (fabs(a(sch)) <= eps) {
			break;
		}
		++sch;
	}

	return sch;
}