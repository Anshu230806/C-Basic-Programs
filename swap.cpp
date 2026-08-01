#include <iostream>
using namespace std;
class one
{
public:
    one swap(int a, int b);
};
one one::swap(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
    return 0;
}
int main()
{
    int a, b, c;
    one o1;
    cout << "ent a&b";
    cin >> a >> b;

    o1.swap(a, b);

    return 0;
}