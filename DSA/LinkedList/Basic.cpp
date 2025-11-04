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

// int main(){
//     Node * Head;
//     Head = new Node(25);

//     cout<<Head->data<<endl;
//     cout<<Head->next<<endl;
//     return 0;
// }


// // inserting a node at staring of linked list

// int main(){
//     Node * Head;
//     Head = new Node(25);

//     if(Head==NULL){
//         Head = new Node(25);
//     }
//     else{
//         Node *temp;
//         temp = new Node(28);
//         temp->next = Head;
//         Head=temp;
//     }

//     cout<<Head->data<<endl;
//     cout<<Head->next<<endl;
//     return 0;
// }


// // Creating linked list from array while adding node to start and print it

// int main(){
//     int arr[4]={2,3,4,5};

//     Node * Head;
//     Head = NULL;
//     for(int i=0;i<4;i++){
//         if(Head==NULL){
//             Head = new Node(arr[i]);
//         }
//         else{
//             Node *temp;
//             temp = new Node(arr[i]);
//             temp->next = Head;
//             Head=temp;
//         }
//     }

//     Node *temp=Head;
//     while(temp){    //(temp!=NULL)
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     return 0;
// }

// // Creating linked list from array while adding node to end and print it

// int main(){
//     int arr[4]={2,3,4,5};

//     Node * Head= NULL;
//     Node *tail=NULL;
//     for(int i=0;i<4;i++){
//         if(Head==NULL){
//             Head = new Node(arr[i]);
//             tail=Head;
//         }
//         else{
//             tail->next=new Node(arr[i]);
//             tail=tail->next;
// // alter
//             // Node *tail=Head;
//             // while(tail->next!=NULL){
//             //     tail=tail->next;
//             // }
//             // Node *temp;
//             // temp = new Node(arr[i]);
//             // tail->next=temp;
//         }
//     }

//     Node *temp=Head;
//     while(temp){    //(temp!=NULL)
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     return 0;
// }


// // Inserting Node in the given position in the linked list


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

    Node * Head= NULL;
    
    Head = CreateLinkedList(arr,0,4,NULL);

    int x=3;   // Position of insertion
    int value=10;   // Value to be inserted
    
    Node*temp=Head;
    x--;
    while(x--){
        temp=temp->next;
    }

    Node *temp2 = new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;


    Node *temp3=Head;
    while(temp3){    //(temp!=NULL)
        cout<<temp3->data<<" ";
        temp3=temp3->next;
    }
    return 0;
}

