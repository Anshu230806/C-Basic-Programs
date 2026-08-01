#include <iostream>
using namespace std;
int &swapReference_var(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int x = 6, y = 7;
    swapReference_var(x, y) = 760;
    cout << "the value of x is:" << x << endl;
    cout << "the value of yis:" << y << endl;
    return 0;
}