#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

   void insertatend(Node *&head, Node *&tail, int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

int main(){
    Node *head, *tail;
    head = tail = NULL;

    insertatend(head,tail,10);
    insertatend(head,tail,20);
    insertatend(head,tail,30);
    insertatend(head,tail,40);
    insertatend(head,tail,50);

    Node *temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    } 

    /*int arr[6] = {2,4,6,8,10,20};
    for(int i=0; i<=5; i++){
        if(Head == NULL){
            Head = new Node(arr[i]);
            tail = Head;
        }

        else {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }

        cout << tail->data << " ";
    }*/

}