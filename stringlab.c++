#include <iostream>
using namespace std;
int main()
{
    string student = "Hello cop, coding world";
    string find = "coding";
    string replace = "webdevelopment";
    string result = "";
    string store = "";
    int length = 0;
    int m = student.length();
    int n = find.length();
    int i = 0;
    int j = 0;
    while (i < m)
    {
        length = 0;
        j = 0;
        while (j < n)
        {
            if (student[i] == find[j])
            {
                store += student[i];
                length++;
                j++;
                if (length == n)
                {
                    result += replace;
                }
            }
            else
            {
                if (length > 0 && length < n)
                {
                    result += store;
                }
                result += student[i];
                break;
            }
        }
        i++;
    }
    cout << result;

    return 0;
}