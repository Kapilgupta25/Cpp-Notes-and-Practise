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

Node *BinaryTree(){
    int x;
    cin>>x;

    if(x==-1){
        return NULL;
    }

    Node *temp = new Node(x);
    cout<<"Enter the left child of "<< x << " : ";
    temp->left = BinaryTree();  // left side
    cout<<"Enter the right child of "<< x << " : ";
    temp->right = BinaryTree();  // right side
    return temp; 
}

void preOrder(Node *root){
    if(root==NULL){
        return;
    }

// print the data of current node
    cout<<root->data;
// left side
    preOrder(root->left);
// if left side is NULL then right side
    preOrder(root->right);
}

void inOrder(Node *root){
    if(root==NULL){
        return;
    }

// left side
    preOrder(root->left);
// if no left chid is there then print the data of current node
    cout<<root->data;
// if left side is NULL then right side
    preOrder(root->right);
}

void postOrder(Node *root){
    if(root==NULL){
        return;
    }

// left side
    preOrder(root->left);
// if left side is NULL then right side
    preOrder(root->right);
// if no right chid is there then print the data of current node
    cout<<root->data;
}

int main(){
    cout<<"Enter the root node : ";
    // creation of binary tree
    Node *root=NULL;
    root = BinaryTree();

    // traversing the tree
    cout<<"Pre Order: ";
    preOrder(root);

    cout<<"\n In Order: ";
    inOrder(root);

    cout<<"\n Post Order: ";
    postOrder(root);

    return 0;
}