// lab_4.2.cpp
// Кобетяк Андрій
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 12

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "----------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		A = (2 + x) / pow(x, 2) + 1;

		if (x < 0)
			B = pow(x, 3) - 2 * pow(x, 4);
		else
			if (x > 2)
				B = 4 * cos(pow(x, 2) - 2);
			else
				B = pow(abs(x) + exp(x), 3);

		y = A + B;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;

		x += dx;
	}

	cout << "----------------------" << endl;

	return 0;
}