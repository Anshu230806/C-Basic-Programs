#include <iostream>
using namespace std;
int Stringlength(string str)
{
    int len = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }
    return len;
}
// string InputString(int len)
// {
//     string str = "";
//     for (int i = 0; i < len; i++)
//     {
//         char ch;
//         cin >> ch;
//         str += ch;
//     }
//     return str;
// }
int main()
{
    // const int MAX_LENGTH = 100;
    // string student[MAX_LENGTH];
    // student = InputString(50);

    // string student = "Hello cop, coding world";
    string student = "";
    getline(cin, student);
    string find = "";
    getline(cin, find);
    string replace = "";
    getline(cin, replace);
    string result = "";
    string store = "";
    int length = 0;
    // int f = Stringlength(student);
    // cout << "length " << f << endl;
    // int m = student.length();
    // int n = find.length();
    int m = Stringlength(student);
    int n = Stringlength(find);
    int i = 0;
    int j = 0;
    while (i < m)
    {
        length = 0;
        j = 0;
        store = ""; // change 3 previous store ko remove krne k liye
        while (j < n)
        {

            if (student[i] == find[j])
            {
                store += student[i];
                length++;
                j++;
                i++; // change 1
                if (length == n)
                {
                    result += replace;
                    i--; // change 4 bbcz i moved 2 times
                }
            }
            else
            {
                if (length > 0 && length < n)
                {
                    result += store;
                    result += student[i];
                }
                else // change 2 avoid repetition
                {
                    result += student[i];
                }
                break;
            }
        }
        i++;
    }
    cout << result << endl;
    return 0;
}