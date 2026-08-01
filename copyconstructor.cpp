#include <iostream>
using namespace std;
class one
{
public:
    int a, b, c;
    one()
    {
        cout << "enter a and b";
        cin >> a >> b;
    }
    one(one &o3) // here reference is used which is another name of o1 object i.e. o3
    {
        cout << o3.a << endl
             << o3.b << endl;
        //  c=a+b;   takes garbage value and print it
        o3.c = o3.a + o3.b;
        o3.a = 5678;
        cout << " c of object o3 " << o3.c;

        a = o3.a;
        b = o3.b;
        c = 277;
        cout << " c of object o2 is" << c;
    }
};
int main()
{
    one o1;
    one o2(o1);
    cout << endl
         << " o2 variables " << endl
         << o2.a << endl
         << o2.c;
    cout << endl
         << "o1 variables" << endl
         << o1.a;
    return 0;
}