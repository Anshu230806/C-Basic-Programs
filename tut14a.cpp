#include <iostream>
using namespace std;
int main()
{
    struct employee
    {
        int eid;
        char favchar;
        float salary;
    } ep;
    // here ep for short forming the struct employee

    struct employee Anshu;
    // ep Anshu;
    Anshu.eid = 240647;
    Anshu.favchar = '$';
    Anshu.salary = 1000000000000;
    cout << "The id of anshu is" << Anshu.eid << endl;
    cout << "The favchar of anshu is" << Anshu.favchar << endl;
    cout << "The salary of anshu is" << Anshu.salary << endl;

    return 0;
}