#include <iostream>
using namespace std;
class a
{
public:
    static int x;
    a()
    {
        static int x = 0;
        x++;
    }
    friend void display();
} a1, a2, a3;
class b
{
public:
    static int y;
    b()
    {
        static int y = 0;
        y++;
    }
    friend void display();
} b1, b2, b3, b4;
class c : public a, public b
{
public:
    static int z;

    c()
    {
        static int z = 0;
        z++;
    }
    friend void display();
} c1;
void display()
{
    cout << a1.x << endl
         << b1.y << endl
         << c1.z << endl;
}

int main()
{
    a a1, a2, a3;
    b b1, b2;
    c c1;
    display();
    return 0;
}