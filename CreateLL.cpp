#include <iostream>
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

class List{
    Node* Head;
    Node* Tail;

    public:
    List(){
        Head = Tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(Head == NULL){
            Head = Tail = newNode;
            return;
        } else {
            newNode->next = Head;
            Head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(Head == NULL){
            Head = Tail = newNode;
            return;
        } else {
            Tail->next = newNode;
            Tail = newNode;
        }
    }

    void pop_front(){
        if(Head == NULL){
            return;
        } else {
            Node* temp = Head;
            Head = Head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back(){
        Node* temp = Head;
        if(Head == NULL){
            return;
        } else {
            while(temp->next!=Tail){
                temp = temp->next;
            }

            temp->next = NULL;
            delete Tail;
            Tail = temp;
        }
    }

    void printLL(){
        Node* temp = Head;

        while(temp){
            cout << temp->data << " ";
            temp = temp->next; 
        }

        cout << endl;
    }
};

int main(){
    List L1;
    
    L1.push_front(10);
    L1.push_front(20);
    L1.push_front(30);

    L1.push_back(5);
    L1.pop_front();
    L1.pop_front();

    L1.pop_back();

    L1.printLL();
}

