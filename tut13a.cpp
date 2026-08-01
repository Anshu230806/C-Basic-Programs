#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {34, 45, 67, 89};
    int math_marks[4];
    math_marks[0] = 67;
    math_marks[3] = 99;
    math_marks[2] = 69;
    math_marks[1] = 58;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << math_marks[3] << endl;
    cout << math_marks[2] << endl;
    // we can change the value of array
    math_marks[2] = 75;
    cout << math_marks[2] << endl;

    return 0;
}