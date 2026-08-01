#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int value)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == value)
        {
            return mid;
        }
        else if (arr[mid] > value)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{

    int arr[5] = {1, 4, 5, 6, 7};
    cout << "enter value to search" << endl;
    int value;
    cin >> value;
    int val = binarysearch(arr, 5, value);
    if (val != -1)
    {
        cout << "element found at index : " << val << endl;
    }
    else
    {
        cout << "element not found " << endl;
    }

    return 0;
}