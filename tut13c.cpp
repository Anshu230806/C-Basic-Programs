#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {38, 86, 67, 59};
    int *p = marks;
    cout << "value of marks at *p is " << *p << endl;
    cout << "value of marks at *(p+2) is " << *(p + 2) << endl;
    cout << "value of marks at *(p+3) is " << *(p + 3) << endl;
    cout << "value of marks at *(p+1)is " << *(p + 1) << endl;

    return 0;
}