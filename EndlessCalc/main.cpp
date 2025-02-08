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

	cout << "��� ������ ������� q\n\n";

	cout << "������� ������� �������������� ���������: \n";
	cin >> a;

	while (!isend)
	{
		cin >> sign; //���� ������ q ��� ������
		if (sign != 'q')
			cin >> b;

		switch (sign) //������������ ��������
		{
		case 'q': isend = 1; break;
		case '+': cout << a << " + " << b << " = " << a + b << endl; a += b; break;
		case '-': cout << a << " - " << b << " = " << a - b << endl; a -= b; break;
		case '*': cout << a << " * " << b << " = " << a * b << endl; a *= b; break;
		case '/': cout << a << " / " << b << " = " << a / b << endl; a /= b; if (!b) isend = 1; break;
		default: cout << "����������� �������� " << sign << endl; break;
		}

	}

#endif // ENDLESS_CALC

#ifdef SHOOTER
	char command = '-';

	cout << "��������� ������� w, s, a, d, spase, enter ��� escape ��� ���������� ��������. \n\nesc - ��� ������ �� ���������. \n\n";

	while (command != Escape) // ���� �� ������ q ��� ������
	{
		command = _getch();
		switch (command)
		{
		case 'w': cout << "������" << endl; break;
		case -26: cout << "������" << endl; break; // �
		case 'a': cout << "�����" << endl; break;
		case -28: cout << "�����" << endl; break; // �
		case 's': cout << "�����" << endl; break;
		case -21: cout << "�����" << endl; break; // �
		case 'd': cout << "������" << endl; break;
		case -94: cout << "������" << endl; break; // �
		case 32: cout << "������" << endl; break; //  space
		case 13: cout << "�����" << endl; break; // enter
		case Escape: cout << "�����" << endl; break; // escape
		case 'q': break;
//		case -87: command = 'q'; break;
		default: cout << (int)command << "����������� ��������" << endl; break;
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
		if (key == 'w' || key == 'W' || key == UpArrow) cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow) cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow) cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow) cout << "������" << endl;
		else if (key == ' ') cout << "������" << endl;
		else if (key == Enter) cout << "�����" << endl;
		else if (key != -32 && key != Escape) cout << "������" << endl;

	} while (key != Escape);
#endif // SHOOTER_TEACHER


}