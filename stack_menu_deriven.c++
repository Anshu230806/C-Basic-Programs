#include <bits/stdc++.h>
#include <iostream>
using namespace std;
template <typename T1, typename T2 = int>
class Mystack
{
public:
    T2 top;
    T2 n;
    Mystack()
    {
        top = -1;
    }
    void insertEl(T1 arr[], T1 el, T2 n)
    {

        if (top == n - 1)
        {
            cout << "Overflow " << endl;
            return;
        }
        top += 1;
        arr[top] = el;
        displayArr(arr);
        return;
    }
    void deleteArr(T1 arr[])
    {
        if (top == -1)
        {
            cout << " underflow" << endl;
            return;
        }
        cout << arr[top] << " deleted " << endl;
        top = top - 1;
        displayArr(arr);
        return;
    }
    void displayArr(T1 arr[])
    {
        if (top == -1)
        {
            cout << "underflow" << endl;
            return;
        }
        cout << "displaying the elements in stack" << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
        return;
    }
    void peek(T1 arr[], T2 pos)
    {
        if (top - pos + 1 < 0)
        {
            cout << "Wrong pos" << endl;
            return;
        }
        cout << " element at " << pos << " is " << arr[top - pos + 1] << endl;
        return;
    }
};
int main()
{
    // template <typename T> ; // you cannot do this
    // T El; // don't
    const int maxsize = 5;
    int arr[maxsize] = {};
    // auto El;
    int n;
    // int maxsize = 5;
    int pos;
    int El;
    Mystack<int, int> st;
    cout << "\nMenu Options:" << endl;
    cout << "1. Insert at top  element" << endl;
    cout << "2. Delete top element" << endl;
    cout << "3. Peek at position" << endl;
    cout << "4. Display stack" << endl;
    cout << "5. Exit" << endl;
    do
    {

        cout << "Enter your choice (1-5): ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "enter el" << endl;

            cin >> El;
            st.insertEl(arr, El, maxsize);
            break;
        case 2:
            st.deleteArr(arr);
            break;
        case 3:
            cout << "enter pos in reference to top " << endl;
            cin >> pos;
            st.peek(arr, pos);
            break;
        case 4:
            st.displayArr(arr);
            break;
        case 5:
            cout << "exit the program " << endl;
            break;
        default:
            cout << "wrong input" << endl;
        }
    } while (n != 5);

    return 0;
}
