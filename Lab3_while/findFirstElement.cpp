#include "findFirstElement.h"

int findFirstElement(double eps) // ������� 4
{
	int num = 0;


	while (true)
	{

		if (fabs(a(num)) <= eps)
			break;

		++num;
	}

	return num;
}