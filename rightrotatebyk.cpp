#include <iostream>
using namespace std;
int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int n = 7;
    int arr[k];

    int j = n - 1;
    for (int i = 0; i < k; i++)
    {
        arr[i] = nums[j];
        j--;
    }
    int l = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i >= k)
        {
            nums[i] = nums[i - k];
        }
        else if (i < k)
        {
            nums[i] = arr[l];
            l++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}
