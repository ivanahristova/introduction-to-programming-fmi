#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "If: "; 
    if (a > b)
        cout << a << endl;
  
    else
        cout << b << endl;
    

    cout << "Ternary operator: " << ((a > b || a == b) ? a : b); // (booleanExpr) ? T : F

}