#include <iostream>
#include <conio.h>
using namespace std;
using std::cin; // оператор разрешени€ видимости
//#define IF_ELSE
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef IF_ELSE
	setlocale(LC_ALL, "");
	int temperature;
	cout << "¬ведите t воздуха\n";
	cin >> temperature;

	if (temperature > 0)
	{
		cout << "Ќа улице тепло ))\n";
	}
	else
	{
		cout << "Ќа улице холодно ((\n";
	}
#endif // IF_ELSE

#ifndef WHILE_2
	int n;
	cout << "¬ведите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}

	char key;
	do
	{
		key = _getch(); //ф-и€ ожидает нажати€ клавиши и возвращает код нажатой клавиши
		cout << (int)key << "\t" << key << endl;
	} while (true);
#endif // !WHILE_2




}