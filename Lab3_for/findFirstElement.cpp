#include "findFirstElement.h"

int findFirstElement(double eps) // ������� 4
{
	int num = 0;

	for (num; true; num++)
	{

		if (fabs(a(num)) <= eps)
			break;

	}

	return num;
}