
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    vector<int> v;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            v.push_back(arr[i]);
            i++;
        }
        else if (arr[i] > arr[j])
        {
            v.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        v.push_back(arr[i]);
        i++;
    }
    while (j <= high)
    {
        v.push_back(arr[j]);
        j++;
    }

    for (int k = low; k <= high; k++)
    {
        arr[k] = v[k - low];
    }
    return;
}
void mergeSort(int arr[], int low, int high)
{
    if (low == high)
        return;
    int l = low;
    int h = high;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
void mergesort(int arr[], int n)
{
    mergeSort(arr, 0, n - 1);
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
    mergesort(arr, 5);
    cout << "array after sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}