#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
Node *head = NULL;
Node *Front = NULL;
Node *Rear = NULL;
void insert(int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        Front = newNode;
        Rear = newNode;
    }
    else
    {
        Rear->next = newNode;
        Rear = Rear->next;
    }
    return;
}
void del()
{
    if (Front == NULL)
    {
        cout << " list is empty";
        return;
    }

    cout << Front->data << " id deleted" << endl;
    if (Front == Rear)
    {
        head = NULL;
        Front = NULL;
        Rear = NULL;
        return;
    }
    else
    {
        Node *temp = Front;
        Front = Front->next;
        head = Front;
        delete temp;
    }
    return;
}
void display()
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << " empty list " << endl;
        return;
    }
    cout << "list of elements" << endl;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return;
}
int main()
{
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
            insert(value);
            break;
        case 2:
            del();
            break;
        case 3:
            display();
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