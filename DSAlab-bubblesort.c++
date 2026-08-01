
#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "array after sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }
}
int main()
{
    int arr[5] = {5, 8, 2, 4, 7};
    cout << "array before sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }
    bubblesort(arr, 5);
    cout << "array after sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}