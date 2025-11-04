#include<bits/stdc++.h>
using namespace std;


// // Creating a node in a doubly linked list
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }

};

// creating doubly linkedlist from array
// int main(){
//     int arr[5]={1,2,3,4,5};

//     Node*head=NULL, *tail=NULL;

//     for(int i=0;i<5;i++){
//         if(head==NULL){
//             head= new Node(arr[i]);
//             tail=head;
//         }
//         else{
//             Node*temp=new Node(arr[i]);
//             tail->next=temp;
//             temp->prev=tail;
//             tail=temp;
//         }
//     }

//     Node* trav=head;
//     while(trav){
//        cout<<trav->data<<" ";
//        trav=trav->next;
//     }
//     return 0;
// }

// Creating DLL using recurrsion

Node* CreateDoubleLL(int arr[], int index, int size, Node* back){
    if(index==size){
        return NULL;
    }
    Node*temp=new Node(arr[index]);
    temp->prev=back;
    temp->next=CreateDoubleLL(arr, index+1, size, temp);
    return temp;
}

int main(){
    int arr[5]={1,2,3,4,5};

    Node*head=NULL;

    head=CreateDoubleLL(arr, 0, 5, NULL);

    Node* trav=head;
    while(trav){
       cout<<trav->data<<" ";
       trav=trav->next;
    }
    return 0;
}