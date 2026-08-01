#include <iostream>
using namespace std;
// call by reference using pointers
void swap_pointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 34, y = 45;
    cout << "The value of x is:" << x << endl;
    cout << "The value of y is:" << y << endl;
    swap_pointer(&x, &y);
    cout << "The value of x after swiping is:" << x << endl;
    cout << "The value of y after swiping  is:" << y << endl;

    return 0;
}