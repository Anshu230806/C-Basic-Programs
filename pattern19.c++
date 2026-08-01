#include <iostream>
using namespace std;

int main()
{

    // Pattern 19
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= (n - i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (j < i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (j < (n - i - 1))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    cout << endl;

    // Pattern 20
    int k = n - 2;
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < k; j++)
        {
            cout << " ";
        }

        k -= 2;

        for (int j = 0; j <= i; j++)
        {
            if (i == n / 2 && j == 0)
            {
                continue;
            }
            cout << "*";
        }

        cout << endl;
    }

    int l = 1;
    for (int i = 0; i <= (n / 2) - 1; i++)
    {
        for (int j = 0; j < (n / 2) - i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < l; j++)
        {
            cout << " ";
        }

        l += 2;

        for (int j = 0; j < (n / 2) - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
