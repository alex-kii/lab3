#include "print.h"

void print(int n, int k) // Задание 3
{
	int sch = 0;

	for (sch; sch < n; sch++) {

		if ( (sch + 1) % k == 0)
			continue;
		else
			std::cout << a(sch) << " ";

	}
}