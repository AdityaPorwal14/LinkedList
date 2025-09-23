#include<iostream>
using namespace std;

class Node {
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
    Head = new Node(50);

    cout << Head->data << " " << Head->next << endl;

    if(Head == NULL){
        Head = new Node(10);
    }

    else {
        Node *temp;
        temp = new Node(33);
        temp->next = Head;
        Head = temp;
    }

    Node *temp = Head;

    cout << temp->data << " " << temp->next << endl;
}