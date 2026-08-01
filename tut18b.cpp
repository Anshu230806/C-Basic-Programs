#include <iostream>
using namespace std;
int fib(int n)
{
    if (n = 1)
    {
        return 1;
    }
    else if (n < 1)
    {
        return 0;
    }
    return fib(n - 2) + fib(n - 1);
}
int main()
{
    int a;
    cout << "enter a number " << endl;
    cin >> a;
    cout << "The fibonacci term at position a is " << fib(a);
    return 0;
}