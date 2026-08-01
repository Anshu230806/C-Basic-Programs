
#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= j)
        {
            i++;
        }
        while (arr[j] > pivot && j >= i)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }

        swap(arr[j], arr[low]);
    }
    return j;
}
void quickSort(int arr[], int low, int high)
{
    if (low > high)
    {
        return;
    }
    int pIndex = partition(arr, low, high);
    quickSort(arr, low, pIndex - 1);
    quickSort(arr, pIndex + 1, high);
}
void quicksort(int arr[], int n)
{
    quickSort(arr, 0, n - 1);
    return;
}
int main()
{
    int arr[5] = {5, 8, 2, 4, 7};
    cout << "array before sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }
    quicksort(arr, 5);
    cout << "array after sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}