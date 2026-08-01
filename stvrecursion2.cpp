#include <iostream>
using namespace std;
int n;
void num(int n);
int main()
{

    cin >> n;
    num(n);
    return 0;
}
void num(int n)
{
    if (n < 1)
    {
        return;
    }
    cout << n;
    num(n - 1);
}