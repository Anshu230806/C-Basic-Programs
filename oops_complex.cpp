#include <iostream>
using namespace std;
class Complex
{
public:
    int i, r;
    Complex()
    {
    }
    Complex(int a, int b)
    {
        i = b;
        r = a;
    }

    void getdata()
    {
        cout << "ent i&r";
        cin >> i >> r;
    }
    void putdata()
    {
        cout << "i is" << i << "r is" << r;
    }

    Complex operator-(Complex c1)
    {
        Complex temp;

        temp.r = r - c1.r;
        temp.i = i - c1.i;
        cout << temp.i << " " << temp.r << endl;

        return temp;
    }
};

int main()
{
    Complex c1(8, 20);
    Complex c2(9, 25);
    Complex c3 = c2 - c1;
    Complex temp;
    // cout<<"ent 1st complex num";
    // c1.getdata();
    // cout<<"ent 2nd complex num ";
    // c2.getdata();

    c3.putdata();
    return 0;
}