#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {5, 8, 2, 4, 7};
    cout << "enter value to search" << endl;
    int value;
    cin >> value;
    int val = linearsearch(arr, 5, value);
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