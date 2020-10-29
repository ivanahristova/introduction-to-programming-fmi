#include <iostream>
using namespace std;

int main()
{
    int n;
	cin >> n;
    
	int limit = n / 2;
	for (int i = 1; i <= limit; i++)
	{
		if (n % i == 0)
		{
			cout << i << ' ' << endl;
		}
	}
}