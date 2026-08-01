#include <iostream>
using namespace std;
class first
{
public:
    int i, j;
    void getdata()
    {
        cout << "enter i and j";
        cin >> i >> j;
    }
    void putdata()
    {
        cout << i << endl
             << j;
    }
    friend first operator*(first f1, first f2);
};
first operator*(first f1, first f2)
{

    f1.i = (f2.i) * 3;
    f1.j = (f2.j) * 3;
    return f1;
}
int main()
{
    first f1, f2;
    f2.getdata();
    f1 = f1 * f2;
    f1.putdata();

    return 0;
}