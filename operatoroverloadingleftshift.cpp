#include <iostream>
using namespace std;
class one
{
public:
    int a, b;
    void getdata()
    {
        cout << "enter a" << endl;
        cin >> a;
    }
    void putdata()
    {
        cout << "a is " << a;
    }
    one operator<<(const one &o2)
    {
        one o3;
        o3.a = a << o2.a;
        return o3;
    }
};
int main()
{ /*mg/*  5jthhgnj/ * jnt5njn
   */
    one o1, o2, o3;
    o1.getdata();
    o2.getdata();
    o3 = o1 << o2;
    o3.putdata();
    return 0;
}