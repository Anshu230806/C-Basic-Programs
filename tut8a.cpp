#include <bits/stdc++.h>
using namespace std;
// manipulators-setw and endl
// #include<iostream>
// #include<iomanip>
int main()
{
    int a = 23, b = 567, c = 5678;
    cout << "The value of a without setw is : " << a << endl;
    cout << "The value of b without setw is : " << b << endl;
    cout << "The value of c without setw is : " << c << endl;
    cout << "The value of a with setw is : " << setw(4) << a << endl;
    cout << "The value of b with setw is : " << setw(4) << b << endl;
    cout << "The value of c with setw is : " << setw(4) << c << endl;
    return 0;
}