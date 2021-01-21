#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 5, b = 10, c = 15, d = 20, x = 25, x_coord = 0.5, y_coord = -2;

    // Задача 1 -------------------------------------------
	double izr1 = 1 + x / (1 + x / (1 + (x / (1 + x))));
	double izr2 = x * x + sqrt(1 + 2 * x + 3 * x * x);

    // Задача 2а ------------------------------------------
	bool res = a > 0 || b > 0 || c > 0;

    // Задача 2б ------------------------------------------
	bool isIn = false;
    if ((x_coord <= 2 && x_coord >= 0 && y_coord <= 0 && y_coord >= -2) || sqrt(x_coord * x_coord + y_coord * y_coord) <= 1)
		isIn = true;

    // Задача 3 -------------------------------------------
	(a == b && a == c && b == c);
	(a == 0 || (a >= 5 && a <= 10));
	(a > 1 && (a < 6 || a == 10));

    // Задача 4 -------------------------------------------
	x = !a || b || c; // a == f || b == t || c == t

	if (a)
	{
		if (b)
			x = true;
		else
		{
			if (c)
				x = true;
			else
				x = false;
		}
	}
	else
		x = true;

    x = (a) ? ((b) ? true : ((c) ? true : false)) true;
}
