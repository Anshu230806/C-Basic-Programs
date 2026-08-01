#include <iostream>
using namespace std;
// call by reference or address
int swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return 0;
}
int main()
{
    int x = 374, y = 3748;
    cout << "the value of x " << x << endl;
    cout << "the value of y " << y << endl;
    swapReference(x, y);
    cout << "the value of  x " << x << endl;
    cout << "the value of y " << y << endl;
    return 0;
}