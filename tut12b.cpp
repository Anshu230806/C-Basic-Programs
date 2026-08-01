#include <iostream>
using namespace std;
int main()
{
    int a = 3, *b, **c;
    b = &a, c = &b;
    cout << "the address of a is" << &a << endl;
    cout << "the address of a is" << b << endl;
    cout << "the address of b is" << &b << endl;
    cout << "the address of b is" << c << endl;
    cout << "the address of a is" << *c << endl;
    cout << "the value at address of bis" << **c << endl;

    return 0;
}