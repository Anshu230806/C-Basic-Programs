#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void SetData(int a, int b, int c);
    void getdata()
    {
        cout << "the value of a is :" << a << endl;
        cout << "the value of b is :" << b << endl;
        cout << "the value of c is :" << c << endl;
        cout << "the value of d is :" << d << endl;
        cout << "the value of e is :" << e << endl;
    }
};
void employee::SetData(int a, int b, int c)
{
    a = a;
    this->b = b;
    this->c = c;
    // a is throwing garbage value bcz here we are saying that a ki value hm a hi rakhna chahte h naki vo jo setdata inta ke throw pass hui h
    //  but by using this->a we saying this a ki value ko a ke barabar kr do jo ki setdata int a se pass ki gyi h
}
int main()
{
    employee harry;
    // harry.a=34 this throws an error bcz a is a private data
    harry.d = 45;
    harry.e = 93;
    harry.SetData(23, 67, 86);
    harry.getdata();
    return 0;
}