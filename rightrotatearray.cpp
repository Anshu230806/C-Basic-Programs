#include <iostream>
using namespace std;
int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int n = 7;
    int arr[k];

    int j = n - k;
    for (int i = 0; i < k; i++)
    {
        arr[i] = nums[j];
        j++;
    }
    int l = 0;
    for (int i = 0; i < n; i++)
    {

        nums[i] = nums[i - k];

        if (i < k)
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
