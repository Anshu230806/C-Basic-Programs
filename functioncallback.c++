#include <iostream>
using namespace std;
void second()
{
    cout << "second function" << endl;
    return;
}
void first(string str, callback)
{
    callback();
    cout << " first function" << endl;
    return;
}
int main()
{
    first("Anshu", second);
    return 0;
}