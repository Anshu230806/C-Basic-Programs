#include <iostream>
using namespace std;
class myClass
{
public:
    int i;
    myClass()
    {
        i = 0;
    }
    void func()
    {
        i++;
    }
};
int main()
{
    myClass m;
    m.func();
    cout << m.i << endl;
    m.func();
    cout << m.i << endl;

    return 0;
}