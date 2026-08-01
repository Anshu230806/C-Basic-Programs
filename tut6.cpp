#include <iostream>
using namespace std;
int main()
{
    int a = 23, b = 45, c = 76;
    // Logical operators;
    cout << ((a == b) && (a < b)) << endl;

    cout << ((a == b) || (a < b)) << endl;

    cout << !(a == b);
    return 0;
}
