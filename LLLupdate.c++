#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

// Convert array to linked list
Node *arrayToLinkedList(const vector<int> &arr)
{
    if (arr.empty())
        return nullptr;
    Node *head = new Node(arr[0]);
    Node *current = head;
    for (int i = 1; i < arr.size(); i++)
    {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}

// Update the original array using the linked list
void updateArrayFromLinkedList(Node *head, vector<int> &arr)
{
    Node *current = head;
    int index = 0;
    while (current != nullptr && index < arr.size())
    {
        arr[index] = current->data; // Update array with new values
        current = current->next;
        index++;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = arrayToLinkedList(arr);

    // Modify the linked list (e.g., add 10 to each node)
    Node *current = head;
    while (current != nullptr)
    {
        current->data += 10; // Update: 1→11, 2→12, etc.
        current = current->next;
    }

    // Sync changes back to the original array
    updateArrayFromLinkedList(head, arr);

    // Print updated array
    for (int num : arr)
    {
        cout << num << " "; // Output: 11 12 13 14 15
    }

    return 0;
}