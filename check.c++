#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << "*";
        }
        k++;
        cout << "\n";
    }

    cout << endl
         << endl;
    k = m - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = k; j > 0; j--)
        {
            cout << "*";
        }
        k--;
        cout << "\n";
    }

    cout << endl
         << endl;

    //   scope of j is the number of i or till i
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl
         << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl
         << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}