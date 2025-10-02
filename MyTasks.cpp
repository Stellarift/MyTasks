//Задание 1
#include <iostream>
using namespace std;

/*int main() {
	setlocale(LC_ALL, "ru");
	char symbol;

	cout << "Введите свой символ: ";
	cin >> symbol;

	if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z')) {
		
		cout << "Это буква" << endl;
	}
	else if (symbol >= '0' && symbol <= '9') {

		cout << "Это цифра" << endl;
	}
	else if (symbol == '.' || symbol == ',' || symbol == '!' || symbol == '?') {

		cout << "Это знак препинания" << endl;
	}
	else {
		
		cout << "Это другой символ" << endl;
	}
	return 0;
}*/

//Задание 2
/*
int main() {
	setlocale(LC_ALL, "ru");
	float minutes;
	int operator_choice;
	float price = 0;

	cout << "Введите длительность разговора(минуты): ";
	cin >> minutes;

	cout << "Выберете оператора: " << endl;
	cout << "1 - МТС (2.5 руб/мин)" << endl;
	cout << "2 - Билайн (3 руб/мин)" << endl;
	cout << "3 - Мегафон (2.8 руб/мин)" << endl;
	cout << "4 - Теле2 (2.2 руб/мин)" << endl;
	cout << "Ваш выбор:" << endl;
	cin >> operator_choice;

	switch (operator_choice) {
	case 1:
		price = minutes * 2.5;
		cout << "Выбран МТС" << endl;
		break;
	case 2:
		price = minutes * 3;
		cout << "Выбран Билайн" << endl;
		break;
	case 3:
		price = minutes * 2.8;
		cout << "Выбран Мегафон" << endl;
		break;
	case 4:
		price = minutes * 2.2;
		cout << "Выбран Теле2" << endl;
		break;
	default:
		cout << "Неверно указан оператор" << endl;
	}
	if (operator_choice >= 1 && operator_choice <= 4) {
		
		cout << "Стоимость разговора: " << price << "рублей" << endl;
	}
	return 0;
}*/

//Задание 3

int main() {
	setlocale(LC_ALL, "ru");
	int choice;

	cout << "1 - Узнать сколько кода нужно писать" << endl;
	cout << "2 - Узнать сколько можно опоздать" << endl;
	cout << "Ваш выбор: ";
	cin >> choice;

	switch (choice) {
	case 1: {
		int salary, lates;
		cout << "Желаемая зарплата($): ";
		cin >> salary;
		cout << "Количество опозданий: ";
		cin >> lates;

		int fine = (lates / 3) * 20;

		int lines = ((salary + fine) * 100) / 50;

		cout << "Нужно написать строк: " << lines << endl;
		break;
	} case 2: {
		int lines, salary;
		cout << "Сколько строк кода: ";
		cin >> lines;
		cout << "Желаемая зарплата ($)";
		cin >> salary;

		int max_salary = (lines * 50) / 100;

		int can_lose = max_salary - salary;

		int can_late = (can_lose / 20) * 3;

		cout << "Можно опоздать раз: " << can_late << endl;
		break;
	}
	default:
		cout << "Ошибка" << endl;

	}
	return 0;
}

