#include <bits/stdc++.h>
using namespace std;
class MyQueue
{
public:
    stack<int> s1;
    stack<int> s2;
    void push(int x)
    {
        s1.push(x);
        return;
    }
    void pop()
    {
        if (!s2.empty())
        {
            s2.pop();
            return;
        }
        else
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        s2.pop();
        return;
    }
    int top()
    {
        int a;
        if (!s2.empty())
        {
            a = s2.top();
            return a;
        }
        else
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        a = s2.top();
        return a;
    }
};
int main()
{
    MyQueue obj;
    obj.push(2);
    obj.push(4);
    obj.push(1);
    cout << obj.top() << endl;
    obj.pop();
    cout << obj.top() << endl;
    return 0;
}