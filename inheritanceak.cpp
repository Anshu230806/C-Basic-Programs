#include <iostream>
using namespace std;
class a
{
public:
    int marks;
    char name[20];
    int p, ch, m;
    void stud()
    {
        cout << "enter student name " << endl;
        cin >> name;
    }
};
class b : public a
{
public:
    void input()
    {
        cout << "enter marks of p,ch,m " << endl;
        cin >> p >> ch >> m;
    }
};
class c : public b
{
public:
    void add()
    {
        marks = p + ch + m;
    }
};
class d : public c
{
public:
    void show()
    {
        cout << "marks is   " << marks;
    }
};
int main()
{
    d d1;
    d1.stud();
    d1.input();
    d1.add();
    d1.show();
    return 0;
}