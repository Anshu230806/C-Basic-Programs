#include <iostream>
using namespace std;
// function
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int num1, num2;
    cout << "enter num1and num2" << endl;
    cin >> num1 >> num2;
    cout << "The sum of num1 and num2 is:" << sum(num1, num2);

    return 0;
}