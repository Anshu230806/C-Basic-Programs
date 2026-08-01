#include <iostream>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int s = 0, ans;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e)
        {
            if (arr[mid] < arr[mid - 1])
            {

                e = mid;
            }
            else
            {
                ans = mid;
                s = mid + 1;
            }
        }
        return ans;
    }
};
int main()
{
}