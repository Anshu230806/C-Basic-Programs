#include <iostream>
using namespace std;

class Factorial
{
public:
    static int f, n;
    static void input();
    static void fac();
};

int Factorial::f = 1; // Initialize f to 1 for factorial calculation
int Factorial::n = 0; // Initialize n

void Factorial::input()
{
    cout << "Enter a number: ";
    cin >> n;
}

void Factorial::fac()
{
    f = 1; // Reset f to 1 for each calculation
    for (int i = 1; i <= n; i++)
    {
        f = f * i; // Calculate factorial
    }
    cout << "Factorial of " << n << " is " << f << endl;
}

int main()
{
    Factorial::input();
    Factorial::fac(); // Calculate and display factorial
    return 0;
}