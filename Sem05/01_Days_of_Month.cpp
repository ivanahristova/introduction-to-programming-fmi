#include <iostream>
using namespace std;

int main()
{
    int month;
    cin >> month;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		cout << 31 << endl;

	else if (month == 4 || month == 6 || month == 9 || month == 11)
		cout << 30 << endl;

	else if (month == 2)
		cout << 28 << endl;

	else
		cout << "Invalid input" << endl;

}