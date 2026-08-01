class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int i = s.size() - 1;
        for (int j = 1; j == i / 2; j++)
        {
            swap(s[j], s[i]);
            i--;
        }
        for (int j = 1; j = s.size(); j++)
        {
            cout << s[j];
        }
    }
};