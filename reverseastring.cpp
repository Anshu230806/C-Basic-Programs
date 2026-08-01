#include <stack>
#include <iostream>
#include <cctype>
using namespace std;
string reverse(string s)
{
    int i = 0;
    int n = s.size();
    int j = n - 1;
    while (i <= j)
    {
        swap(s[i], s[j]);
        j--;
        i++;
    }
    return s;
}
int precedence(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/' || ch == '%')
    {
        return 2;
    }
    else if (ch == '+' && ch == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infixtopostfix(string s)
{
    stack<char> st; // take a char stack very imp
    string s1 = ""; // output string
    int i = 0;
    int n = s.size(); // we can  do this it doesnot follow array decay like thing
    cout << n << endl;
    while (i < n)
    {
        if (isalnum(s[i]))
        {
            s1 += s[i];
        }
        else
        {

            if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    s1 += st.top();
                    st.pop();
                }
                st.pop();
                st.push(s[i]);
            }
            else
            {
                while (!st.empty() && (precedence(s[i]) <= precedence(st.top())))
                {
                    if (s[i] == '^' && st.top() == '^')
                    {
                        break; ///////////////////////////////////////
                    }
                    else
                    {
                        s1 += st.top();
                        st.pop();
                    }
                }
                st.push(s[i]);
            }
        }
        i++; ///////////////
    }
    while (!st.empty())
    {
        s1 += st.top();
        st.pop();
    }
    return s1;
}

int main()
{
    string s = "2+3*B";
    cout << "before: " << s << endl;
    s = reverse(s);
    string postfix;

    postfix = infixtopostfix(s);
    s = reverse(postfix);
    cout << "after: " << s << endl;

    return 0;
}