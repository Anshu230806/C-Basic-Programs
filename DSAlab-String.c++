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
int main()
{
    string student = "";
    getline(cin, student);
    string find = "";
    getline(cin, find);
    string replace = "";
    getline(cin, replace);
    string result = "";
    string store = "";
    int m = Stringlength(student);
    int n = Stringlength(find);
    int i = 0;
    int j = 0;
    while (i < m)
    {
        j = 0;
        store = "";
        int b = 0;
        while (j < n && student[i] == find[j])
        {
            store += student[i];
            j++;
            i++;
            b = 1;
        }

        if (Stringlength(store) == (Stringlength(find)))
        {
            result += replace;
        }
        else
        {
            result += store;
        }

        if (b != 1)
        {
            result += student[i];
            i++;
        }
    }
    cout << result << endl;
    return 0;
}