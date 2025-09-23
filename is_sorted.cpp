#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert at end
void insertEnd(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

// Function to check if linked list is sorted
bool isSorted(Node* head) {
    if (!head || !head->next) return true; // 0 or 1 node is always sorted

    Node* current = head;
    while (current->next) {
        if (current->data > current->next->data)
            return false; // found a descending pair
        current = current->next;
    }
    return true;
}

// Print list
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* list = nullptr;

    // Create list
    insertEnd(list, 10);
    insertEnd(list, 40);
    insertEnd(list, 90);
    insertEnd(list, 40);

    cout << "Linked List: ";
    printList(list);

    if (isSorted(list))
        cout << "The linked list is sorted.\n";
    else
        cout << "The linked list is NOT sorted.\n";

    return 0;
}
