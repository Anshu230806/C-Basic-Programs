#include <iostream>
using namespace std;
// int sum = 0; you can also this
void f(int i, int n)
{
    static int sum = 0;
    if (i > n)
    {
        cout << sum;
        return;
    }
    sum = sum + i;
    f(i + 1, n);
}
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    f(1, n);
    return 0;
}