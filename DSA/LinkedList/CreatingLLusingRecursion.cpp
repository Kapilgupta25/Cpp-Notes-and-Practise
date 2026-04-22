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


// Node* CreateLinkedList(int arr[], int index, int size){
//     if(index==size){
//         return NULL;
//     }

//     Node *temp;
//     temp = new Node(arr[index]);
//     temp->next=CreateLinkedList(arr, index+1, size);
//     return temp;
// }

// int main(){
//     int arr[4]={2,3,4,5};

//     Node * Head=NULL;

//     Head=CreateLinkedList(arr, 0, 4);

//     Node *temp=Head;
//     while(temp){    //(temp!=NULL)
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     return 0;
// }



// inserting node at staring using recursion

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

    Node *temp=Head;
    while(temp){    //(temp!=NULL)
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}