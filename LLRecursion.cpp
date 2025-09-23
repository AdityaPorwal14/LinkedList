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

Node* createlinkedlist(int arr[], int index, int size){
        if(index == size){
            return NULL;
        }

        else{
            Node *temp;
            temp = new Node(arr[index]);
            temp->next = createlinkedlist(arr,index+1,size);

            return temp;
        }
    }

int main(){
    Node *head;
    head = NULL;

    int arr[5] = {2,5,6,7,8};
    head = createlinkedlist(arr,0,5);

    Node *temp;
    temp = head;

    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}