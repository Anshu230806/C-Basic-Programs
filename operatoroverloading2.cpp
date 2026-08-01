#include <iostream>
using namespace std;
class Overload
{
public:
    int i;
    Overload()
    {
    }
    Overload(int x)
    {
        i = x;
    }
    void putdata()
    {
        cout << " i is " << i << endl;
    }
    Overload operator=(Overload &o1)
    {
        i = o1.i;
        return *this;
        // Overload temp;
        // temp.i = o1.i;
        // return temp;
        }
};
int main()
{
    Overload o1(8), o2;
    o2 = o1;
    // o2 = o2.operator=(o1);
    o1.putdata();
    o2.putdata();
    return 0;
}