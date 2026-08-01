
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mostFrequentElement(vector<int> &nums)
    {
        int n = nums.size();
        int hash[10001] = {0};
        for (int i = 0; i < n; i++)
        {
            hash[nums[i]]++;
        }
        int j = 0, k = 0;
        int largest = hash[0];
        int samevalue = hash[0];
        for (int i = 1; i < 10000; i++)
        {
            if (largest < hash[i])
            {
                j = i;
                largest = hash[i];
            }
            else if (largest == hash[i])
            {
                samevalue = hash[i];
                k = i;
            }
        }
        if (k > 0 && j > k)
        {
            return k;
        }
        else
        {
            return j;
        }
    }
};
int main()
{
    int nums[10000] = {2, 3, 4, 4, 4, 5, 5, 6};
    int result = mostFrequentElement(nums);
}