#include <iostream>
#include <limits.h>
using namespace std;
int rev(int n);
int main()
{
    int n, k;
    cin >> n;
    k = rev(n);

    cout << k;

    return 0;
}
int rev(int n)
{

    int ans = 0;
    int digit;
    while (n != 0)
    {
        digit = n % 10;
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            return 0;
        }
        ans = ans * 10 + digit;
        n = n / 10;
    }
    return ans;
}
