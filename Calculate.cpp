# include <iostream>
using namespace std;

float a, b, c; // Заводим 3 переменных для операций
int p; // Заводим переменную для работы с калькулятором либо выхода из программы
char d; // Заводим переменную для знака вычисления

int main()
{
	while (p != 2)
	{
		// Вводим 1 для работы с калькулятором, 2 для выхода
		cout << "Enter 1 - calculator \nEnter 2 - exit \n";
		cin >> p;
		switch (p) {
		case 1: {
			cout << "Enter an expression: \n";
			cin >> a >> d >> b;
			if (d == '+')	c = a + b;
			if (d == '-')	c = a - b;
			if (d == '*')	c = a * b;
			if (d == '/')	c = a / b;
			cout << "Result = " << c << "\n" << "\n";

			if (d != '+' && d != '-' && d != '*' && d != '/')
				cout << "Error! Operator is not correct \n";
		}
		case 2: {
			break;
		}
		}
	}
}