#include <iostream>
#include <windows.h>
#include <locale.h>
#include <random>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	std::random_device rd;
	int numb = rd() % 100;
	int choice;

	do {
		cout << "������ ����� �� 1 �� 100 \n";
		cin >> choice;

		if (choice < numb ) {
			cout << "���� ������ \n";
		}
		else if (choice > numb) {
			cout << "���� ������ \n";
		}
		else {
			if (choice == numb) {
				cout << "�� ������! \n";
			}

		}

	} while (choice != numb);

	return 0;

}


