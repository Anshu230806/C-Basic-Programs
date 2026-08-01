#include <iostream>
using namespace std;
int main()
{
    int m, n, x, y, z, a;
    cout << "enter money" << endl;
    cin >> m;
    switch (1)
    {

    case 1:
        x = m / 100;
        cout << "no of 100 notes" << x << endl;
    case 2:
        y = (m - x * 100) / 50;
        cout << "no of 50 notes" << y << endl;
    case 3:
        z = (m - x * 100 - y * 50) / 20;
        cout << "no of 20 notes" << z << endl;
    case 4:
        a = (m - x * 100 - y * 50 - z * 20) / 1;
        cout << "no of 1 notes" << a << endl;
    }
    return 0;
}