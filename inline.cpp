#include <iostream>
using namespace std;
class circle
{
public:
    int a;
    inline float circum(int r);
};
float circle::circum(int r)
{
    float area = 3.14 * r * r;
    return area;
}
int main()
{
    circle c1;
    int r;
    cout << "enter r";
    cin >> r;
    float area = c1.circum(r);
    cout << area;
    return 0;
}