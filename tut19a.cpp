#include <iostream>
using namespace std;
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}
int volume(int a)
{
    return (a * a * a);
}
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout << "The volume of cuboid 3,6,5 is " << volume(3, 6, 5) << endl;
    cout << "The volume of cube 3 is " << volume(3) << endl;
    cout << "The volume of cylinder  3,6 is " << volume(3, 6) << endl;

    return 0;
}