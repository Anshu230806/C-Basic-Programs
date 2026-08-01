#include <iostream>
using namespace std;
union money
{
    int rice;
    char car;
    float pounds;
};
int main()
{
    union money m1;
    m1.rice = 34;
    // m1.car = 'c';
    // m1.pounds = 65;
    cout << m1.rice << endl;
    // cout << m1.car << endl;
    // cout << m1.pounds << endl;
    // ektime pr ek hi execute hota h last wala m1
    return 0;
}