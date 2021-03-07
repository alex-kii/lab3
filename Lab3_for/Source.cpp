#include <iostream>
#include "summ.h"
#include "summ2.h"
#include "print.h"
#include "findFirstElement.h"
#include "findFirstNegativeElement.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");

	int num = 0, n = 0, k = 0;
	double eps = 0;

	
	for (int i = 0; true; i++)
	{
		cout << "Выберите задание, введя соответствующую цифру:" << "\n"
			<< "1. Задание 1" "\n" << "2. Задание 2" << "\n" << "3. Задание 3" << "\n"
			<< "4. Задание 4" << "\n" << "5. Задание 5" << "\n" << "6. Выход" << "\n";

		cin >> num;

		switch (num)
		{
		case 1:
			system("cls");
			cout << "Введите число n" << "\n";
			cin >> n;
			cout << "Искомая сумма: " << summ(n) << "\n";
			break;

		case 2:
			system("cls");
			cout << "Введите число eps" << "\n";
			cin >> eps;
			cout << "Искомая сумма: " << summ2(eps) << "\n";
			break;

		case 3:
			system("cls");
			cout << "Введите по очереди числа n и k" << "\n";
			cin >> n >> k;
			cout << "Искомые числа: ";
			print(n, k);
			cout << "\n";
			break;

		case 4:
			system("cls");
			cout << "Введите число eps" << "\n";
			cin >> eps;
			cout << "Искомый номер элемента: " << findFirstElement(eps) << "\n";
			break;

		case 5:
			system("cls");
			cout << "Введите число eps" << "\n";
			cin >> eps;
			cout << "Номер искомого отрицательного элемента: " << findFirstNegativeElement(eps) << "\n";
			break;

		case 6:
			system("cls");
			return 0;
			break;

		default:
			cout << "Ошибка при выборе номера.\n";
			break;
		}

		system("pause");
		system("cls");
	}

	return 0;
}