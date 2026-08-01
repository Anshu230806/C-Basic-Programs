#include <iostream>
using namespace std;
int glo = 23;
void sum()
{
    cout << glo << endl;
}
int main()
{
    int glo = 9;
    sum();
    cout << glo << endl;

    bool is_true = false;
    cout << is_true;
    return 0;
}