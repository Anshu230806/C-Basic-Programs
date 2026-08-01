#include <iostream>
using namespace std;

class que
{
public: //////////
    int n = 5;
    int arr[5];

    int f;
    int r;
    que()
    {
        f = -1;
        r = -1;
    }

    void insert(int val)
    {
        if (r == n - 1)
        {
            cout << "queue is full" << endl;
        }
        else if (f == -1)
        {
            f = 0;
            r = 0;
        }
        else
        {
            r = r + 1;
        }
        arr[r] = val;
        cout << val << "is inserted" << endl;
        return;
    }
    void del()
    {
        if (f == -1)
        {
            cout << " empty queue" << endl;
            return;
        }
        int val = arr[f];
        cout << val << " is deleted" << endl;
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f = f + 1;
        }
        return;
    }

    void display()
    {
        if (f == -1)
        {
            cout << " empty " << endl;
            return;
        }
        cout << "List of element " << endl;
        for (int i = f; i <= r; i++)
        {
            cout << arr[i] << endl;
        }
        return;
    }
};

int main()
{
    // cout << "enter elements for array(n)" << endl;
    // cin >> n;
    que q;
    int m;
    do
    {
        cout << "enter m " << endl;
        cin >> m;
        switch (m)
        {
        case 1:
            cout << "enter value" << endl;
            int value;
            cin >> value;
            q.insert(value);
            break;
        case 2:
            q.del();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << "exiting the program" << endl;
            break;

        default:
            cout << "wrong choice " << endl;
            break;
        }

    } while (m != 4);

    return 0;
}