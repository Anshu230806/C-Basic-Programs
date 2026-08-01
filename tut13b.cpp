#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {38, 86, 67, 59};
    for (int i = 0; i < 4; i++)
    {
        cout << "Roll no " << (i + 1) << " marks " << marks[i] << endl;
    }
    return 0;
}