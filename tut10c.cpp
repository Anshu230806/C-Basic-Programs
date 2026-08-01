#include <iostream>
using namespace std;
int main()
{
    int i = 4;
    do
    {
        cout << i << endl;
        i++;
    } while (i > 8);
    cout << "jadu of do while " << endl;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 8);
    return 0;
}