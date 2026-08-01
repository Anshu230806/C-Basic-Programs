#include <iostream>
using namespace std;
class demo
{
    int x;

public:
    demo(int a)
    {
        x = a;
        cout << "construtor is called for x " << x << endl;
    }
    ~demo()
    {
        cout << " destructor is called for x " << x << endl;
    }
    void show()
    {
        cout << " value of x is " << x << endl;
    }
};
int main()
{
    demo d1(10), d2(20);
    d1.show();
    d2.show();
    return 0;
}