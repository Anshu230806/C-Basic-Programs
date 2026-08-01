#include <iostream>
using namespace std;
// operator precedence
// First use precedence then use associvity
int main()
{
    int a = 3, b = 4;
    int c = a * 5 + b - 45 + 87;
    cout << c;
    return 0;
}