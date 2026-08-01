#include <iostream>
using namespace std;
int main()
{
    // int a = 3;
    // int *b = &a;
    int a = 3, *b;
    b = &a;
    cout << "the address of a is " << &a << endl;
    cout << "the address of a is " << b << endl;
    cout << "the value  at address of b is " << *b << endl;
    cout << "the address of b is " << &b << endl;
    return 0;
}