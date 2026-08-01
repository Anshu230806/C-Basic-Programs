#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int j = n; j > 0; j--)
    {
        for (int i = 0; i < j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}