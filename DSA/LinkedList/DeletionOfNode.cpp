#include<bits/stdc++.h>
using namespace std;


// // Creating a node in a linked list
class Node{
    public:
    int data;
    Node * next;
    Node(int value){
        data=value;
        next=NULL;
    }
};


// Deleting Node from starting

Node * CreateLinkedList(int arr[], int index, int size, Node*prev){
    if(index==size){
        return prev;
    }

    Node *temp;
    temp = new Node(arr[index]);
    temp->next=prev;
    return CreateLinkedList(arr, index+1, size, temp);
}

int main(){
    int arr[4]={2,3,4,5};

    Node * Head;
    Head = NULL;

    Head=CreateLinkedList(arr, 0, 4, NULL);

    if(Head!=NULL){
        Node*temp=Head;
        Head=Head->next;
        delete temp;
    }

    Node *temp=Head;
    while(temp){    //(temp!=NULL)
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}