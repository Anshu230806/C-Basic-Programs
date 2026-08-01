#include <iostream>
using namespace std;
int main()
{
    int a = 45, b = 45.46;
    cout << "The value of a is" << (float)a << endl;
    cout << "The value of a is" << float(a) << endl;
    cout << "The value of b is" << (int)a << endl;

    return 0;
}