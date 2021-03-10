#include "print.h"

void print(int n, int k) // Задание 3
{
	int sch1 = 0, sch2 = 0;

	while (sch1 < n)
	{
		++sch2;
		if (sch2 % k == 0) {
			++sch1;
			continue;
		}
		else {
			std::cout << a(sch1) << " ";
			++sch1;
		}
	}
}