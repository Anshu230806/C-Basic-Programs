#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter age " << endl;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "you can vote" << endl;
        break;

    default:
        cout << "you can't vote " << endl;
    }
    return 0;
}