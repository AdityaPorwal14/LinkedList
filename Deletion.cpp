#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node * prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

int main(){
    Node* head, *tail;
    head = tail = NULL;


    //creating an 5 size of an link list using array
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

    //Delete at front
    /*if(head!=NULL){
        if(head->next==NULL){
            delete head;
            head = NULL;
        }

        else {
            Node *temp = head;
            head = temp->next;
            delete temp;

            if(head)
            head->prev = NULL;
        }
    }*/

    //Delete at end
    /*if(head!=NULL){
        if(head->next==NULL){
            delete head;
            head = NULL;
        }

        else {
            Node *temp = head;
            while(temp->next){
                temp = temp->next;
            }
            
            temp->prev->next = NULL;
            delete temp;
        }
    }*/

    //Delete from K Pos 
    int pos = 3;
    if(pos==1){
        if(head->next == NULL){
            delete head;
            head = NULL;
        }

        else {
            Node *temp = head;
            head = head->next;
            delete temp;
            head->prev = NULL;
        }

    }

        else {
            int count = 1;
            Node *temp = head;

            while(temp!=NULL && count<pos){
                count++;
                temp = temp->next;
            }

            Node *curr = head;
            while(--pos){
                curr = curr->next;
            }

            if(curr->next == NULL){
                curr->prev->next = NULL;
                delete curr;
            }

            else {
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
                delete curr;
            }
        }


    //Traverse
    Node* trav = head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}