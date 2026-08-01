#include <iostream>
using namespace std;
struct Node
{
    string name;
    int rollno;
    int marks;
    Node *next;
    Node(string name, int rollno, int marks)
    {
        this->name = name;
        this->rollno = rollno;
        this->marks = marks;
        next = NULL;
    }
    Node()
    {
        this->name = "";

        this->rollno = 0;
        this->marks = 0;
        next = NULL;
        // this("", 0, 0);
    }
};
void insert_n_el(Node *&head)
{
    int n;
    cout << "enter n";
    cin >> n;
    // string name;
    // int rollno;
    // int marks;

    for (int i = 0; i < n; i++)
    {
        Node *newNode = new Node();
        Node *temp = head;
        cout << " enter details for " << i + 1 << " student " << endl;
        cout << "name " << endl;
        cin >> (newNode->name);
        cout << "roll no" << endl;
        cin >> (newNode->rollno);
        cout << "marks " << endl;
        cin >> (newNode->marks);
        newNode->next = NULL;
        if (temp == NULL)
        {
            temp = head = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = temp->next;
        }
    }
    return;
}
void insert_el_begin(Node *&head)
{
    Node *newNode = new Node();

    cout << " enter details ";
    cin >> newNode->name;
    cin >> newNode->rollno;
    cin >> newNode->marks;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
    return;
}
void insert_el_end(Node *&head)
{
    Node *newNode = new Node();
    Node *temp = head;
    cout << " enter details ";
    cin >> (newNode->name);
    cin >> (newNode->rollno);
    cin >> newNode->marks;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}
void delete_el_begin(Node *&head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    return;
}
void delete_el_end(Node *&head)
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    if (temp->next = NULL)
    {
        head = NULL;
        return;
    }
    Node *preptr = temp;
    while (temp->next != NULL)
    {
        preptr = temp;
        temp = temp->next;
    }
    preptr->next = NULL;
    delete temp;
    return;
}

void display(Node *head)
{
    Node *newNode = head;
    while (newNode != NULL)
    {
        cout << "details " << endl;
        cout << newNode->name << "   ";
        cout << newNode->rollno << "   ";
        cout << newNode->marks << endl;
        newNode = newNode->next;
    }
    return;
}
int main()
{
    Node *head = NULL;
    int n;
    do
    {
        cout << "enter n";
        cin >> n;
        switch (n)
        {
        case 1:
            insert_n_el(head);
            break;
        case 2:
            insert_el_begin(head);
            break;
        case 3:
            insert_el_end(head);
            break;
        case 4:
            delete_el_begin(head);
            break;
        case 5:
            delete_el_end(head);
            break;
        case 6:
            display(head);
            break;
        case 7:
            cout << " exiting the program";
            break;
        default:
            cout << "wrong choice ";
            break;
        }
    } while (n != 7);

    return 0;
}