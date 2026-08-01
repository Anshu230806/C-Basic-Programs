#include <iostream>
using namespace std;
int main()
{
    int k = 4;
    for (int i = 1; i < 10; i += 2)
    {
        for (int j = k; j >= 0; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "#";
        }
        k--;
        cout << endl;
    }
    return 0;
}