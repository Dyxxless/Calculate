﻿# include <iostream>
# include <cmath>
using namespace std;

float a, b, c; // Заводим 3 переменных для операций
int p; // Заводим переменную для работы с калькулятором либо выхода из программы
char d; // Заводим переменную для знака вычисления

int main()
{
	setlocale(LC_ALL, "Russian"); // Добавляем русский текст
	while (p < 4)
	{
		// Вводим цифру для разных сценариев работы программы
		cout << "Введите 1 для базовых операций (+, -, /, *) \nВведите 2 для операции возведения в степень \nВведите 3 для операции извлечени корня \nДля выхода из программы нажмите любую цифру\n";
		cin >> p;

		switch (p) {
		case 1: {
			cout << "Введие пример: \n";
			cin >> a >> d >> b;
			if (d == '+')	c = a + b;
			if (d == '-')	c = a - b;
			if (d == '*')	c = a * b;
			if (d == '/')
				if (b != 0)	c = a / b;
				else {
					cout << "Ошибка! На ноль делить нельзя! \n\n";
					break;
				}
			cout << "Результат равен " << c << "\n" << "\n";

			if (d != '+' && d != '-' && d != '*' && d != '/')
				cout << "Ошибка! Некорректный оператор! Введите +, -, *, / \n\n";
			break;
		}

		case 2: {
			cout << "Введие число, которое нужно возвести в степень: \n";
			cin >> a;
			cout << "Введие степень, в которую нужно возвести число: \n";
			cin >> b;
			//double rate = pow(a, b);
			cout << "Результат равен " << pow(a, b) << "\n" << "\n";
			break;
		}

		case 3: {
			cout << "Введие число, из которого нужно извлечь корень: \n";
			cin >> a;
			cout << "Введие корень: \n";
			cin >> b;
			//double root = pow(a, 1 / b);
			cout << "Результат равен " << pow(a, 1 / b) << "\n" << "\n";
			break;
		}
		}
	}
}