#include <iostream>
using namespace std;
int c = 1234;
int main()
{
    int a = 23, b = 45, c;
    c = a + b;
    cout << "The sum of a+b is c " << c << endl;
    cout << "The value of global c " << ::c;
    return 0;
}