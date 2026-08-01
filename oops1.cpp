#include <iostream>
using namespace std;
class one
{
public:
    int a, b, c;
    one(int a, int b)
    {
        c = a + b;
        cout << c << endl;
    }
};

int main()
{
    cout << "enter a& b" << endl;
    cin >> a >> b;
    one o1(a, b);

    return 0;
}