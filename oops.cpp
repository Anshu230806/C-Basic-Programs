#include <iostream>
#include <string>
using namespace std;
class factorial
{
public:
    static int f, n;
    static void input();
    static void fac();
};

int factorial::f = 1;
int factorial ::n;
void factorial::input()
{
    cout << "number is";
    cin >> n;
}
void factorial::fac()
{

    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    cout << "factorial is";
    cout << f << endl;
}
int main()
{
    factorial::input();
    factorial::fac();
    factorial::fac();
}