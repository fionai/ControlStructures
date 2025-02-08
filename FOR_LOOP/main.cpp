#include <iostream>
#include <conio.h>
using namespace std;

//#define FACTORIAL
//#define POWER	
#define ASCII_KEYS //2 �������� ����������


void main()
{
	setlocale(LC_ALL, "");

	unsigned int a, i, j, n;
	unsigned long long rez = 1;
	char simb;

#ifdef FACTORIAL
	cout << "���������� ���������� �����\n\n������� ����� �����: ";
	cin >> a;

	for (i = 2; i <= a; i++) // �� 1 ��� ������ ��������, ������� ����������. ��������� 0 ����� ����� 1.
	{
		rez *= i;
		cout << i << "! =  " << rez << endl;
	}
	cout << "\n��������� " << a << " ����� " << rez << "\n";

#endif // FACTORIAL

#ifdef POWER
	cout << "���������� ����� � �������\n\n������� ����� �����: ";
	cin >> a;
	cout << "������� ������� �����: ";
	cin >> n;

	rez = a;
	for (i = 2; i <= n; i++)
	{
		rez *= a;
		if (i < n)
			cout << a <<"^" << i << " ����� " << rez << endl; // ������������� ����������
	}

	//������������� ����� ����������
	cout << endl;
	if (!n)
	{
		rez = 1;
		cout << a << " � ������� 0 ����� " << rez << endl;
	}
	else 
		cout << "�����: " << a << " � ������� " << n << " ����� " << rez << endl;


#endif // POWER

#ifdef ASCII_KEYS
	cout << "������� ASCII-��������\n\n";

	//"��������������" �������
	for (i = 0; i < 256; i++)
	{
		simb = i;
		if (i == 9)			//��� ������� �������� ���������� ��� � ����� � ����������� ������ ��� ������� 10, ������� ���� �� ������
			cout << i << "-tab" << "\t";
		else if (i == 10)
			cout << i << "- " << "\t";
		else if (i == 13)
			cout << i << "-enter";
		else
			cout << i << "-" << simb << "\t";

		if ( !((i + 1) % 16) ) //����� ������� 16-�� ������� ������� ������
			cout << endl;	
	}
	cout << "\n\n\n";

	//"������������" �������. 256 = 16*16. � ������ 0, 16, 32,... 1, 17, 33... 2, 18, 34...
	for (i = 0; i < 16; i++)
	{
		for (j = 0; j < 16; j++)
		{
			a = i + j * 16;
			simb = a;
			if ( a == 9)		//��� ������� �������� ���������� ��� � ����� � ����������� ������ ��� ������� 10, ������� ���� �� ������
				cout << a << "-tab" << "\t";
			else if (a == 10)
				cout << a << "- " << "\t";
			else if (a == 13)
				cout << a << "-enter";
			else
				cout << a << "-" << simb << "\t";
		}
		cout << endl;  //������� ������ ����� 16-�� ��������
	}


#endif // ASCII_KEYS


}