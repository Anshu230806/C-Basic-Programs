#include <iostream>
using namespace std;
double moneyreceived(int currentmoney, double factor = 1.04)
{
    return (currentmoney * factor);
}
int main()
{
    int money = 100000000;
    cout << "if you have " << money << "Rs then you  will return back " << moneyreceived(money) << " Rs after 1 year " << endl;
    cout << "for vip if you have  " << money << "Rs then you  will return back " << moneyreceived(money, 1.10) << " Rs after 1 year " << endl;
    return 0;
}
// here 1.04e+008 means 1.o4*10^8 =104000000