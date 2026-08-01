#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct Node
{
public:
    int data;
    Node *next;
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
// return type Node* , pointer bcz head is a pointer

Node *convertArr2LL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node *print(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
        return head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return head;
}
Node *removek(Node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = temp->next;
        delete (temp);
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    Node *previous = NULL;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            previous->next = previous->next->next;
            free(temp);
            break;
        }
        previous = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    // code for understanging
    // int x = 2;
    // Node *y = new Node(x);
    // or we can use
    // Node x = Node(2, nullptr);
    // Node *y = &x;
    // cout << y << endl;
    // cout << y->data << endl;
    // cout << y->next << endl;
    // // Node *mover = y;
    // cout << y << endl;
    // cout << y->data << endl;
    // cout << y->next << endl;
    // mover becomes same to head

    vector<int> arr = {1, 5, 7};
    Node *head = convertArr2LL(arr);
    // cout << head << endl;
    // cout << head->data << endl;
    // cout << head->next << endl;
    // int *l = &arr[0];
    // cout << l << endl;

    // int *k = &arr[1];
    // cout << k << endl;
    head = removek(head, 1);
    print(head);

    return 0;
}