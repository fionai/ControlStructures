#include <iostream>
using namespace std;
#define PLUS_MINUS
//#define BIG_SQUARE
//#define BIG_SQUARE_1FOR
//#define BIG_SQUARE_2FOR
//#define THE_MOST_BEAUTIFUL_CHESS

void main()
{
//	setlocale(LC_ALL, ""); убрала, чтобы выводить белый квадрат в шахматах. 

	//**********************************************
	//Остался вопрос. Как "включать" и "отключать" эту кодировку. 
	//Чтобы и русский работал временами, и символы других кодировок.
	//**********************************************

	int n, x;
	cout << "Geometry Homework\n";

#ifdef PLUS_MINUS
	cout << "Square \"Pluses and minuses\"\nEnter a number: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2) cout << "+ ";	else cout << "- ";
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}

#endif // PLUS_MINUS

#ifdef BIG_SQUARE
	cout << "A big square\nEnter a number: ";
	cin >> n;

	for (int j = 0; j < n; j++)
	{
		for (int k = 0; k < n; k++)
		{
			for (int l = 0; l < n; l++)
				for (int m = 0; m < n; m++)
					if ((j+l) % 2)
						cout <<  "  ";
					else
						cout << "* ";
			cout << endl;
		}
	}

#endif // BIG_SQUARE


#ifdef BIG_SQUARE_1FOR
	cout << "A big square by using ONE FOR\nEnter a number: ";
	cin >> n;


	for (int i = 0; i < n * n * n * n; i++)
	{ 
		if (!(i % (n * n)) && i > 0)
			cout << endl;
		if ((i / (n * n * n) + ((i % (n * n)) / n)) % 2) // 1)  i / (n * n * n) - признак смены ориентации при начале строк (каждые n строк)
														 // 2)  i % (n * n) - получаем номер позиции на строке
														 //(i % (n * n)) / n) - получаем, какая по счету идет N-ка символов
														 // 3) четность суммы признаков 1) и 2), показывает, какой нужен символ
			cout  << "  ";
		else
			cout << "* ";

	}
	cout << endl;
#endif // BIG_SQUARE_1FOR

#ifdef BIG_SQUARE_2FOR
	cout << "A big square by using TWO FOR\nEnter a number: ";
	cin >> n;

	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n; j++)
		{
			if ((j / n + i / n) % 2)
				cout << "  ";
			else
				cout << "* ";
		}
		cout << endl;
	}

#endif // BIG_SQUARE_2FOR


#ifdef THE_MOST_BEAUTIFUL_CHESS
	cout << "The most beautiful chess\nEnter a number: ";
	cin >> n;

	for (int i = -1; i <= n; i++) // начала рисовать доску с 0. А потом добавила первую строку номер -1, чтобы не переделывать всё
	{
		if (i == -1) // рисуем первую строку
		{
			cout << (char)218; //верхний левый уголок
			for (int j = 0; j < n*2; j++)
				cout << (char)196;
			cout << (char)191 << endl; //верхний правый уголок
		}
		else if (i == n) //рисуем последнюю строку
		{
			cout << (char)192; //нижний левый уголок
			for (int j = 0; j < n * 2; j++)
				cout << (char)196;
			cout << (char)217 << endl; //нижний правый уголок
		}
		else //рисуем всю доску
		{
		cout << (char)179; //вертикальная полоса
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2)
				cout << "  ";
			else
				cout << (char)219 << (char)219; //2 белых полуквадрата
		}
		cout << (char)179 << endl; //вертикальная полоса
		}
	}

#endif // THE_MOST_BEAUTIFUL_CHESS


}