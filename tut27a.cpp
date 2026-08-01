#include <iostream>
using namespace std;
class complex; // forward declaration of class
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcomplexnumber(complex, complex);
};
class complex
{
    int a, b;
    // friend int calculator :: sumrealcomplex(complex,complex);
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "your complex number is: " << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcomplexnumber(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(4, 7);
    o1.printnumber();
    o2.setnumber(7, 4);
    o2.printnumber();
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is : " << res << endl;
    int resc = calc.sumcomplexnumber(o1, o2);
    cout << "The sum of complex part of o1 and o2 is :  " << res << endl;
    return 0;
}