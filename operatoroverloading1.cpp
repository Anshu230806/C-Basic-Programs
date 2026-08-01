#include <iostream>
using namespace std;
class Overload
{
public:
    int i;
    void getdata()
    {
        cout << "enter i";
        cin >> i;
    }
    void display()
    {
        cout << "small is " << i << endl;
    }
    Overload operator<(Overload o1)
    {
        Overload temp;
        temp.i = (o1.i < i) ? (o1.i) : (i);
        return temp;
    }
};
int main()
{
    Overload o1, o2, o3;
    o1.getdata();
    o2.getdata();
    o3 = o1 < o2;
    o3.display();
    return 0;
}