#include <iostream>
using namespace std;
#define UL_ANGLE	(char)218
#define UR_ANGLE	(char)191
#define LL_ANGLE	(char)192
#define LR_ANGLE	(char)217
#define H_LINE		(char)196
#define V_LINE		(char)179
#define WHITE_BOX	(char)219
#define BLACK_BOX	(char)32


void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер доски: ";
	cin >> n;

	setlocale(LC_ALL, "C");


	for (int i = 0; i <= n+1; i++)
	{
		for (int j = 0; j <= n+1; j++)
		{
			if (i == 0 && j == 0)
				cout << UL_ANGLE;
			else if (i == 0 && j == n + 1)
				cout << UR_ANGLE;
			else if (i == n + 1 && j == 0)
				cout << LL_ANGLE;
			else if (i == n + 1 && j == n + 1)
				cout << LR_ANGLE;
			else if (i == 0 || i == n + 1)
				cout << H_LINE << H_LINE;
			else if (j == 0 || j == n + 1)
				cout << V_LINE;
			else if ((i + j) % 2)
				cout << BLACK_BOX << BLACK_BOX;
			else
				cout << WHITE_BOX << WHITE_BOX;
		}
		cout << endl;
	}

}

