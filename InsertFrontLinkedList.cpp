#include<iostream>
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

int main(){
    Node *Head;
    Head = NULL;

    int arr[5] = {2,4,6,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        if(Head == NULL){
            Head = new Node(arr[i]);
        }

        else {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }

    }

        Node *temp = Head;
        while(temp){
            cout << temp->data << " ";
            temp = temp->next;
        }

};