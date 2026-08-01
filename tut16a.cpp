#include <iostream>
using namespace std;
// call by value
int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "the value of  x " << a << endl;
    cout << "the value of y " << b << endl;
    return 0;
}
int main()
{
    int x = 374, y = 3748;
    cout << "the value of x " << x << endl;
    cout << "the value of y " << y << endl;
    swap(x, y);

    return 0;
}