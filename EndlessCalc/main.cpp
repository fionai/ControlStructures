#include <iostream>
#include <conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;


//#define ENDLESS_CALC
#define SHOOTER
//#define SHOOTER_TEACHER

#define Enter 13
#define Escape 27
#define LeftArrow 75
#define UpArrow 72
#define DownArrow 80
#define RightArrow 77


void main()
{
	setlocale(LC_ALL, "");

#ifdef ENDLESS_CALC
	int isend = 0;
	double a, b;
	char sign;

	cout << "Для выхода нажмите q\n\n";

	cout << "Введите простое арифметическое выражение: \n";
	cin >> a;

	while (!isend)
	{
		cin >> sign; //если нажали q для выхода
		if (sign != 'q')
			cin >> b;

		switch (sign) //обрабатываем операции
		{
		case 'q': isend = 1; break;
		case '+': cout << a << " + " << b << " = " << a + b << endl; a += b; break;
		case '-': cout << a << " - " << b << " = " << a - b << endl; a -= b; break;
		case '*': cout << a << " * " << b << " = " << a * b << endl; a *= b; break;
		case '/': cout << a << " / " << b << " = " << a / b << endl; a /= b; if (!b) isend = 1; break;
		default: cout << "Неизвестная операция " << sign << endl; break;
		}

	}

#endif // ENDLESS_CALC

#ifdef SHOOTER
	char command = '-';

	cout << "Нажимайте клавиши w, s, a, d, spase, enter или escape для выполнения действий. \n\nesc - для выхода из программы. \n\n";

	while (command != Escape) // пока не нажали q для выхода
	{
		command = _getch();
		switch (command)
		{
		case 'w': cout << "вперед" << endl; break;
		case -26: cout << "вперед" << endl; break; // ц
		case 'a': cout << "влево" << endl; break;
		case -28: cout << "влево" << endl; break; // ф
		case 's': cout << "назад" << endl; break;
		case -21: cout << "назад" << endl; break; // ы
		case 'd': cout << "вправо" << endl; break;
		case -94: cout << "вправо" << endl; break; // в
		case 32: cout << "прыжок" << endl; break; //  space
		case 13: cout << "огонь" << endl; break; // enter
		case Escape: cout << "выход" << endl; break; // escape
		case 'q': break;
//		case -87: command = 'q'; break;
		default: cout << (int)command << "неизвестное действие" << endl; break;
		}
	}

#endif // SHOOTER

#ifdef SHOOTER_TEACHER
	cout << "SHOOTER\n\n";

	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UpArrow) cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow) cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow) cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow) cout << "Вправо" << endl;
		else if (key == ' ') cout << "Прыжок" << endl;
		else if (key == Enter) cout << "Огонь" << endl;
		else if (key != -32 && key != Escape) cout << "Ошибка" << endl;

	} while (key != Escape);
#endif // SHOOTER_TEACHER


}