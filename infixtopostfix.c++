
#include <iostream>
#include <bits/stdc++.h>
#include <cctype>
#include <stack>
using namespace std;
int precedence(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infixtopostfix(string infix)
{
    stack<int> st;
    string postfix = "";
    for (char ch : infix)
    {
        if (isalnum(ch))
        {
            postfix += ch;
        }
        else if (ch == '(')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            while (!st.empty() && ch != '(')
            {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && precedence(st.top()) >= precedence(ch))
            {
                if (ch == '^' && st.top() == '^')
                {
                    break;
                }
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}
int main()
{
    string infix = "A+B*C-(D+E*F-H)*I";
    string postfix = infixtopostfix(infix);
    cout << postfix;
    return 0;
}