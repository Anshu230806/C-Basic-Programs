#include <iostream>
using namespace std;
// function prototype
// int sum();
int sum()
{
    int c;
    c = 778;
    return c;
    // if we write return 0 here then sum will return 0 value and print 0
}
int ans()
{
    int a = 47;
    cout << a << endl;
    return 0;
    // here we can write return 0 bcz cout is present in the fn and it print the value
}
int main()
{
    cout << sum() << endl;
    // int ans =sum();
    // cout<<sum();
    ans();
    return 0;
}
// one funciton should have cout either in main or sum function to print the value
