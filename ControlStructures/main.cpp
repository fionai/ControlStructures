#include <iostream>
#include <conio.h>
using namespace std;
using std::cin; // �������� ���������� ���������
//#define IF_ELSE
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef IF_ELSE
	setlocale(LC_ALL, "");
	int temperature;
	cout << "������� t �������\n";
	cin >> temperature;

	if (temperature > 0)
	{
		cout << "�� ����� ����� ))\n";
	}
	else
	{
		cout << "�� ����� ������� ((\n";
	}
#endif // IF_ELSE

#ifndef WHILE_2
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}

	char key;
	do
	{
		key = _getch(); //�-�� ������� ������� ������� � ���������� ��� ������� �������
		cout << (int)key << "\t" << key << endl;
	} while (true);
#endif // !WHILE_2




}