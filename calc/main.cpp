#include <iostream>
using namespace std;
//#define CALC_IF_ELSE
//#define CALC_SWITCH

void main()
{
	setlocale(LC_ALL, "");
	double a, b;
	char sign;
	cout << "Введите простое арифметическое выражение: ";
	cin >> a >> sign >> b;
#ifdef CALC_IF_ELSE
	if (sign == '+')
	{
		cout << a << " + " << b << " = " << a + b;
	}
	else if (sign == '-')
	{
		cout << a << " - " << b << " = " << a - b;
	}
	else if (sign == '*')
	{
		cout << a << " * " << b << " = " << a * b;
	}
	else if (sign == '/')
	{
		cout << a << " / " << b << " = " << a / b;
	}
	else
		cout << "Нет операции " << sign;
#endif

#ifdef CALC_SWITCH
	switch (sign)
	{
	case '+': cout << a << " + " << b << " = " << a + b; break;
	case '-': cout << a << " - " << b << " = " << a - b; break;
	case '*': cout << a << " * " << b << " = " << a * b; break;
	case '/': cout << a << " / " << b << " = " << a / b; break;
	default: cout << "Нет операции " << sign; break;
	}
#endif


}