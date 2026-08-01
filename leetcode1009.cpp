#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    class Solution
    {
    public:
        int bitwiseComplement(int n)
        {
            int ans = 0, i = 0, k = 0;
            while (n != 0)
            {

                int bit = n & 1;
                if (bit == 1)
                {
                    bit = 0;
                }
                else
                {
                    bit = 1;
                }
                ans = (bit * pow(10, i)) + ans;
                n = n >> 1;
                i++;
            }
            while (ans != 0)
            {

                int digit = ans % 10;
                if (digit == 1)
                {
                    k = k + pow(2, i);
                }
                ans = ans / 10;
                i++;
            }
            return k;
        }
    };
    return 0;
}