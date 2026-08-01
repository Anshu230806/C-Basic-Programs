#include <iostream>
using namespace std;
class one
{
public:
    int n, rounds;
    int salary;
    void getdata()
    {
        cout << " enter 0 for morning and  1 for evening " << endl;
        cin >> n;
        cout << " enter total no. of rounds ";
        cin >> rounds;
    }
    void display()
    {
        float rs = 0;
        switch (n)
        {
        case 0:
            rs = 2.00;
            break;
        case 1:
            rs = 1.50;
            break;
        default:
            cout << "enter correct number " << endl;
            break;
        }
        salary = rs * rounds * 4;
        cout << " total salary of a month " << salary << endl;
    }
};
int main()
{
    one o1;
    o1.getdata();
    o1.display();
    return 0;
}