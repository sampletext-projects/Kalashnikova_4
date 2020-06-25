#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделала Калашникова А. М. УМЛ - 112\n";
	cout << "Программа для рассчёта функции\n";

	double x = 0.7;

	for (int n = 5; n <= 25; n += 5)
	{
		double y = 1;
		int sign = -1;
		int fact = 1;
		double x_n = x;

		for (int i = 0; i < n; i++)
		{
			y += sign * x_n / fact;
			sign *= -1;
			fact *= i + 2;
			x_n *= x;
		}

		cout << "Y(" << x << ") [n: " << n << "] = " << y << "\n";
	}

	system("pause");

	return 0;
}
