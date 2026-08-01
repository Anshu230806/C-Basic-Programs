#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int *dataPtr; // Pointer to the original array element
    Node *next;
    Node(int *ptr) : dataPtr(ptr), next(nullptr) {}
};

// Convert array to linked list (stores pointers)
Node *arrayToLinkedList(vector<int> &arr)
{
    if (arr.empty())
        return nullptr;
    Node *head = new Node(&arr[0]);
    Node *current = head;
    for (int i = 1; i < arr.size(); i++)
    {
        current->next = new Node(&arr[i]);
        current = current->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = arrayToLinkedList(arr);

    // Modify the linked list (directly updates the array)
    Node *current = head;
    while (current != nullptr)
    {
        (*current->dataPtr) += 10; // Updates the original array
        current = current->next;
    }

    // Print the modified array
    for (int num : arr)
    {
        cout << num << " "; // Output: 11 12 13 14 15
    }

    return 0;
}