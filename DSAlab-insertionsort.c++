#include <iostream>
using namespace std;
void insertionsort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
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
    int arr[5] = {17, 29, 5, 8, 2};
    cout << "array before sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    insertionsort(arr, 5);
    cout << "array after sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}