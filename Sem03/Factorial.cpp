#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

    // 1-ви начин
	int fact = 1; // 1 - неутрален елемент
	for (int i = 0; i < num; i++)
	{
		fact *= (num - i);
	}
	cout << fact << endl;

    // 2-ри начин
    fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout << fact;
}