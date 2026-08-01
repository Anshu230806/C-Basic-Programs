#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int c = 4;
    a = a++;
    c = ++c;
    cout << a << endl
         << c;

    return 0;
}