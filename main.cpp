#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	char choice[1][1];
	choice[0][0] = 'y';
	while ((char)choice[0][0] == 'y') {
		int a, b;
		char x[1][1];
		do {
			cout << "Выбирите одну из операций[+.-.*,/,%,^,!,&,|,<,>]:"
				<< endl;
			cin >> *x;
		} while (x[0][0] != '+' && x[0][0] != '-' && x[0][0] != '*' &&
			x[0][0] != '/' && x[0][0] != '%' && x[0][0] != '^' &&
			x[0][0] != '!' && x[0][0] != '&' && x[0][0] != '|' &&
			x[0][0] != '<' && x[0][0] != '>');
		if (x[0][0] == '+' || x[0][0] == '-' || x[0][0] == '*' || x[0][0] == '/' ||
			x[0][0] == '%' || x[0][0] == '^' || x[0][0] == '>' || x[0][0] == '<' ||
			x[0][0] == '|' || x[0][0] == '&') {
			cout << "Введите первое число:" << endl;
			cin >> a;
			cout << "Введите второе число:" << endl;
			cin >> b;
			if (cin.good()) {
				switch ((char)x[0][0]) {
				case '+':
					cout << "Сумма:" << (a + b) << endl;
					break;
				case '-':
					cout << "Разность:" << (a - b) << endl;
					break;
				case '*':
					cout << "Произведение:" << (a * b) << endl;
					break;
				case '/':
					if (b != 0)
						cout << "Частное:" << (double)a / (double)b << endl;
					else
						cerr << "Ошибка: на 0 делить нельзя!" << endl;
					break;
				case '%':
					cout << "Модуль:" << (a % b) << endl;
					break;
				case '^':
					for (int i = 0, j = a; i < b - 1; i++) a *= j;
					cout << "Возведение в степень:" << a << endl;
					break;
				case '&':
					cout << "Побитовая И:" << (a & b) << endl;
					break;
				case '<':
					if (b >= 0)
						cout << "Побитовый сдвиг влево:" << (a << b)
						<< endl;
					else
						cerr << "Некорректные данные" << endl;
					break;
				case '>':
					if (b >= 0)
						cout << "Побитовый сдвиг вправо:" << (a >> b)
						<< endl;
					else
						cerr << "Некорректные данные" << endl;
					break;
				case '|':
					cout << "Побитовое ИЛИ:" << (a | b) << endl;
					break;
				default:
				}
			}
			else {
				cin.ignore();
				cin.clear();
				cout << "Некорректные данные" << endl;
			}
		}
		if (x[0][0] == '!') {
			cout << "Введите пожалуйста число:" << endl;
			cin >> a;
			switch ((char)x[0][0]) {
			case '!':
				cout << (!a) << endl;
				break;
			default:
				cerr << "Ошибка" << endl;
			}
		}
		do {
			cout << "Если вы хотите продолжить, введите y, если закончить - n"
				<< endl;
			cin >> *choice;
		} while ((char)choice[0][0] != 'y' && (char)choice[0][0] != 'n');
	}
	cout << "До свидания!" << endl;
	return 0;
}
