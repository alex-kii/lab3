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
		cout << "�������� �������, ����� ��������������� �����:" << "\n"
			<< "1. ������� 1" "\n" << "2. ������� 2" << "\n" << "3. ������� 3" << "\n"
			<< "4. ������� 4" << "\n" << "5. ������� 5" << "\n" << "6. �����" << "\n";

		cin >> num;

		switch (num)
		{
		case 1:
			system("cls");
			cout << "������� ����� n" << "\n";
			cin >> n;
			cout << "������� �����: " << summ(n) << "\n";
			break;

		case 2:
			system("cls");
			cout << "������� ����� eps" << "\n";
			cin >> eps;
			cout << "������� �����: " << summ2(eps) << "\n";
			break;

		case 3:
			system("cls");
			cout << "������� �� ������� ����� n � k" << "\n";
			cin >> n >> k;
			cout << "������� �����: ";
			print(n, k);
			cout << "\n";
			break;

		case 4:
			system("cls");
			cout << "������� ����� eps" << "\n";
			cin >> eps;
			cout << "������� ����� ��������: " << findFirstElement(eps) << "\n";
			break;

		case 5:
			system("cls");
			cout << "������� ����� eps" << "\n";
			cin >> eps;
			cout << "����� �������� �������������� ��������: " << findFirstNegativeElement(eps) << "\n";
			break;

		case 6:
			system("cls");
			return 0;
			break;

		default:
			cout << "������ ��� ������ ������.\n";
			break;
		}

		system("pause");
		system("cls");
	}

	return 0;
}