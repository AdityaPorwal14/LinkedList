#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

int main(){
    Node* head, *tail;
    head = tail = NULL;

    int arr[] = {2,4,6,8,10};
    for(int i=0; i<5; i++){
        if(head == NULL){
            head = new Node(arr[i]);
            tail = head;
        }

        else {
            Node* temp = new Node(arr[i]);
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
    }

    int pos = 0;

    if(pos == 0){
        if(head == NULL){
            head = new Node(5);
        } else {
            Node *temp = new Node(5);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    else {
        Node *curr = head;
        while(--pos){
            curr = curr->next;
        }

        if(curr->next == NULL){
            Node* temp = new Node(5);
            curr->next = temp;
            temp->prev = curr;
        }

        else {
            Node *temp = new Node(5);
            temp->next = curr->next;
            curr->next = temp;
            temp->prev = curr;
            curr->next->prev = temp;
        } 
    }

    Node* trav = head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}