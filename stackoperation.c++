#include <iostream>
#include <stack>
using namespace std;
void pushFunction(stack<int> st)
{
    int el;
    cout << "enter element to push ";
    cin >> el;
    st.push(el);
    cout << " element is pushed successfully " << endl;
}
void popFunction(stack<int> st)
{
}
{
}

int main()
{
    // stack<int> st;
    int arr[5];
    int choice;
    // cout << "enter your choice: (1-3):" << endl
    //      << "1.for push element at top  \n 2. for delete the top element \n 3. for exit  " << endl;
    // cin >> choice;
    do
    {
        // int choice;
        cout << "enter your choice: (1-3):" << endl
             << "1.for push element at top  \n 2. for delete the top element \n 3. for exit  " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            pushFunction(arr);
            break;
        case 2:
            popFunction(arr);
            break;
        case 3:
            break;
        }
    } while (choice != 3) return 0;
}
