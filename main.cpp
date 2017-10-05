
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	char choice[1][1];
	choice[0][0] = 'y';
	while ((char)choice[0][0] == 'y') {
		int op1, op2;
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
			cin >> op1;
			cout << "Введите второе число:" << endl;
			cin >> op2;
			if (cin.good()) {
				switch ((char)x[0][0]) {
				case '+':
					cout << "Сумма:" << (op1 + op2) << endl;
					break;
				case '-':
					cout << "Разность:" << (op1 - op2) << endl;
					break;
				case '*':
					cout << "Произведение:" << (op1 * op2) << endl;
					break;
				case '/':
					if (op2 != 0)
						cout << "Частное:" << (double)op1 / (double)op2 << endl;
					else
						cerr << "Ошибка: на 0 делить нельзя!" << endl;
					break;
				case '%':
					cout << "Модуль:" << (op1 % op2) << endl;
					break;
				case '^':
					for (int i = 0, j = op1; i < op2 - 1; i++) op1 *= j;
					cout << "Возведение в степень:" << op1 << endl;
					break;
				case '&':
					cout << "Побитовая И:" << (op1 & op2) << endl;
					break;
				case '<':
					if (op2 >= 0)
						cout << "Побитовый сдвиг влево:" << (op1 << op2)
						<< endl;
					else
						cerr << "Некорректные данные" << endl;
					break;
				case '>':
					if (op2 >= 0)
						cout << "Побитовый сдвиг вправо:" << (op1 >> op2)
						<< endl;
					else
						cerr << "Некорректные данные" << endl;
					break;
				case '|':
					cout << "Побитовое ИЛИ:" << (op1 | op2) << endl;
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
			cin >> op1;
			switch ((char)x[0][0]) {
			case '!':
				cout << (!op1) << endl;
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
