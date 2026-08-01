
#include <iostream>
#include <cctype>
using namespace std;

class Solution
{
public:
    bool isvowel(char c)
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            return 1;
        }
        return 0;
    }
    string reverseVowels(string s)
    {
        int left = 0, right = s.size() - 1;

        while (left < right)
        {
            if (isvowel(s[left]))
            {
                if (isvowel(s[right]))
                {
                    swap(s[left], s[right]);
                }
            }
            if (isvowel(s[left]) != 1)
            {
                left++;
            }
            if (isvowel(s[right]) != 1)
            {
                right--;
            }
        }
        return s;
    }
};
int main()
{
    string str, str1;
    Solution s1;
    cout << "enter string ";
    cin >> str;
    str1 = s1.reverseVowels(str);
    cout << str1;

    return 0;
}