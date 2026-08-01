#include <iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
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
    cout << endl;
    selectionsort(arr, 5);
    cout << "array after sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}