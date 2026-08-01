#include <bits/stdc++.h>
using namespace std;
class MyStack
{
public:
    queue<int> q;
    void push(int x)
    {
        int n = q.size();
        q.push(x);
        for (int i = 0; i < n; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    int pop()
    {
        if (q.empty())
        {
            cout << "empty queue" << endl;
            return -1;
        }
        int a = q.front();
        q.pop();
        return a;
    }
    int top()
    {
        if (q.empty())
        {
            cout << "empty queue" << endl;
            return -1;
        }
        return q.front();
    }
};
int main()
{
    MyStack obj;
    obj.push(2);
    obj.push(4);
    obj.push(5);
    cout << obj.top() << endl;
    cout << obj.pop() << endl;

    return 0;
}