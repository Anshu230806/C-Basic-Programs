#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter a number a:" << endl;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "a is even" << endl;
    }
    else
    {
        cout << "a is odd" << endl;
    }
    return 0;
}