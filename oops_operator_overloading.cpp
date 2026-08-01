#include <iostream>
using namespace std;
class one
{
public:
    int a, b;
    void getdata()
    {
        cout << "enter a and b";
        cin >> a >> b;
    }
    void putdata()
    {
        cout << "a is" << a << "b is " << b;
    }
    void operator++()
    {
        a = a++;
        b = b++;
    }
    void operator++(int a, int b)
    {
        a = ++a;
        cout << "2 a is" << a;
    }
};
int main()
{
    int a, b;
    one o1, o2;
    o1.getdata();
    o1.operator++();
    o1.putdata();
    cin >> a >> b;
    o2.operator++(a, b);

    return 0;
}