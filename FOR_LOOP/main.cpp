#include <iostream>
#include <conio.h>
using namespace std;

//#define FACTORIAL
//#define POWER	
#define ASCII_KEYS //2 варианта ориентации


void main()
{
	setlocale(LC_ALL, "");

	unsigned int a, i, j, n;
	unsigned long long rez = 1;
	char simb;

#ifdef FACTORIAL
	cout << "ВЫЧИСЛЕНИЕ ФАКТОРИАЛА ЧИСЛА\n\nВведите целое число: ";
	cin >> a;

	for (i = 2; i <= a; i++) // на 1 нет смысла умножать, поэтому пропускаем. Факториал 0 также равен 1.
	{
		rez *= i;
		cout << i << "! =  " << rez << endl;
	}
	cout << "\nФакториал " << a << " равен " << rez << "\n";

#endif // FACTORIAL

#ifdef POWER
	cout << "ВОЗВЕДЕНИЕ ЧИСЛА В СТЕПЕНЬ\n\nВведите целое число: ";
	cin >> a;
	cout << "Введите степень числа: ";
	cin >> n;

	rez = a;
	for (i = 2; i <= n; i++)
	{
		rez *= a;
		if (i < n)
			cout << a <<"^" << i << " равно " << rez << endl; // промежуточные результаты
	}

	//окончательный вывод результата
	cout << endl;
	if (!n)
	{
		rez = 1;
		cout << a << " в степени 0 равно " << rez << endl;
	}
	else 
		cout << "ОТВЕТ: " << a << " в степени " << n << " равно " << rez << endl;


#endif // POWER

#ifdef ASCII_KEYS
	cout << "ТАБЛИЦА ASCII-символов\n\n";

	//"горизонтальная" таблица
	for (i = 0; i < 256; i++)
	{
		simb = i;
		if (i == 9)			//для красоты отдельно обработаем таб и ентер и неизвестный символ под номером 10, который тоже всё портит
			cout << i << "-tab" << "\t";
		else if (i == 10)
			cout << i << "- " << "\t";
		else if (i == 13)
			cout << i << "-enter";
		else
			cout << i << "-" << simb << "\t";

		if ( !((i + 1) % 16) ) //после каждого 16-го символа перевод строки
			cout << endl;	
	}
	cout << "\n\n\n";

	//"вертикальная" таблица. 256 = 16*16. В строке 0, 16, 32,... 1, 17, 33... 2, 18, 34...
	for (i = 0; i < 16; i++)
	{
		for (j = 0; j < 16; j++)
		{
			a = i + j * 16;
			simb = a;
			if ( a == 9)		//для красоты отдельно обработаем таб и ентер и неизвестный символ под номером 10, который тоже всё портит
				cout << a << "-tab" << "\t";
			else if (a == 10)
				cout << a << "- " << "\t";
			else if (a == 13)
				cout << a << "-enter";
			else
				cout << a << "-" << simb << "\t";
		}
		cout << endl;  //перевод строки после 16-ти символов
	}


#endif // ASCII_KEYS


}