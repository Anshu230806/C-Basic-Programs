#include <iostream>
using namespace std;
class A
{
public:
    int fix = 7400;
    int bonus, incentive;
    void a(int n)
    {
        bonus = 1500;
        incentive = n / 10;
        int total = fix + bonus + incentive;
        cout << " total salary is " << total;
    }
    void b(int n)
    {
        bonus = 7400;
        incentive = n / 20;
        int total = fix + bonus + incentive;
        cout << " total salary is " << total;
    }
};

int main()
{
    A a1;
    int sales;
    cout << "enter sales " << endl;
    cin >> sales;
    if (sales > 150000)
    {
        a1.a(sales);
    }
    else
    {
        a1.b(sales);
    }

    return 0;
}