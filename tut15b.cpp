#include <iostream>
using namespace std;
// function prototype
int sum(int a, int b);
int main()
{
    int num1, num2;
    cout << "enter a num1 and num 2" << endl;
    cin >> num1 >> num2;
    cout << "Sum of num1 and num 2 is :" << sum(num1, num2);
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}