#include <iostream>
using namespace std;

class Date
{
    int day, month, year;

public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    Date operator+(Date d)
    {
        Date temp;
        temp.day = day + d.day;
        temp.month = month + d.month;
        temp.year = year + d.year;

        // Simple normalization (not perfect)
        if (temp.day > 31)
        {
            temp.month += temp.day / 31;
            temp.day %= 31;
        }
        if (temp.month > 12)
        {
            temp.year += temp.month / 12;
            temp.month %= 12;
        }

        return temp;
    }

    void display()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    Date d1(15, 6, 2023);
    Date d2(20, 5, 2);
    Date d3 = d1 + d2;

    cout << "Date 1: ";
    d1.display();
    cout << "Date 2: ";
    d2.display();
    cout << "Sum: ";
    d3.display();

    return 0;
}