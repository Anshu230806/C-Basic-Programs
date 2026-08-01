#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int k = 5;
    int n = 10;
    int array[k];
    int j = 0;
    for (int i = 0; i < k; i++)
    {
        array[i] = arr[j];
        j++;
    }
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + k];
        if (i > (n - 1 - k))
        {
            arr[i] = array[l];
            l++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}