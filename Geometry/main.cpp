#include <iostream>
using namespace std;


void main()
{
	int n;
	setlocale(LC_ALL, "");
	cout << "Geometry\n¬ведите число: ";
	cin >> n;

/*
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
			cout << "* ";
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << "* ";
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (j < n - i -1)
				cout << "  ";
			else
				cout << "* ";
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (j < i)
				cout << "  ";
			else
				cout << "* ";
		cout << endl;
	}
*/

	/*
	for (int i = 0; i < n*2; i++)
	{
		if (i < n)
		{
			for (int j = 0; j < n - i - 1; j++)
				cout << " ";
			cout << "/";
			for (int j = 0; j < i; j++)
				cout << "  ";
			cout << "\\";
		}
		else
		{
			for (int j = 0; j < i-n; j++)
				cout << " ";
			cout << "\\";
			for (int j = 0; j < 2*n - i - 1; j++)
				cout << "  ";
			cout << "/";
		}

		cout << endl;
	}
	*/
	for (int i = 0; i < n*2; i++)
	{
		for (int j = 0; j < n*2; j++)
		{
			if (i == (j+n) || j == (i+n))
				cout << "\\";
			//else if (i == (n-j-1) || i == (n*3 - j-1))
			else if (i == (n - j - 1) || (i-n) == (n * 2 - j - 1))  //одно и то же
				cout << "/";
			else
				cout << " ";
		}
		cout << endl;
}

}