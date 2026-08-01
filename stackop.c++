#include <iostream>
using namespace std;
template <typename T>
class Stack
{
    1 T int top;

    Stack()
    {
        top = -1;
    }
    void push(el)
    {
        if (top >= max - 1)
        {
            cout << "stack is overflow";
            return;
        }
        top = top + 1;
        arr[top] = el;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << " stack is underflow";
            return;
        }
        cout << arr[top--] << "";
    }
} int main()
{
    int arr = [];

    return 0;
}