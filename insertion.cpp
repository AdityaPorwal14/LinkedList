#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

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

    if(head == NULL){
        head = new Node(5);
    }

    else {
        Node* curr = new Node(1);
        curr->next = head;
        head->prev = curr;
        head = curr;
        
    }

    Node* trav = head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }

}