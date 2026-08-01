#include <iostream>
using namespace std;
class A
{
public:
    int start;
    int end, units;
    A()
    {
        cout << " enter reading " << endl;
        cin >> start >> end;
        units = end - start;
    }
    ~A()
    {
        cout << " destructor of A is called ";
    }
};
class B : public A
{
public:
    float energybill;
    B()
    {
        if (units >= 200 && units <= 500)
        {
            energybill = units * 4.50;
        }
        else if (units >= 100 && units < 200)
        {
            energybill = units * 3.50;
        }
        else if (units < 100)
        {
            energybill = units * 2.50;
        }
    }
    ~B()
    {
        cout << " energybill is " << energybill << endl;
    }
};
int main()
{
    B b1;
    return 0;
}