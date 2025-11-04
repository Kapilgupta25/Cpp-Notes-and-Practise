#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

int main(){
    int x, first, second;
    cout<<"Enter the root element:";
    cin>>x;
    queue<Node *> q;
    Node *root = new Node(x);
    q.push(root);
    // not until root became empty create the left and right node 

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        // take the value for left child
        cout<<"Enter the value for left Child of "<< temp->data << " : ";
        cin>>first;
        if(first!=-1){
            temp->left = new Node(first);
            q.push(temp->left);
        }
        // take the value for right child
        cout<<"Enter the value for right Child of "<< temp->data << " : ";
        cin>>second;
        if(second!=-1){
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
    return 0;
}