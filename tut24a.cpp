#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count; // here we cannot assign value value to it ,it is syntax error //this is also called class variable
public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is " << id << endl
             << "this is employee number " << count << endl;
    }
    static void getcount(void)
    {
        // cout<<id; this is wrong bcz in static function we can only access static variables
        cout << "the value of count is " << count + 1000 << endl;
    }
};
int employee::count = 1000; // default value is 0 but we can assign value to count here only//static variable ko class k bahar define krte h
int main()
{
    employee harry, lovish, rohan;
    harry.setdata();
    harry.getdata();
    employee::getcount();
    rohan.setdata();
    rohan.getdata();
    employee::getcount();
    lovish.setdata();
    lovish.getdata();
    employee::getcount();
    return 0;
}