#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2);
    void printnumber()
    {
        cout << "your complex number is: " << a << " + " << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3; // remember this
}
int main()
{
    complex c1, c2, sum;
    c1.setnumber(4, 5);
    c1.printnumber();
    c2.setnumber(94, 85);
    c2.printnumber();
    sum = sumcomplex(c1, c2);
    sum.printnumber();

    return 0;
}