#include "findFirstElement.h"

int findFirstElement(double eps) // ������� 4
{
	int num = 0;

	do
	{

		if (fabs(a(num)) <= eps)
			break;

		++num;
	} while (true);

	return num;
}