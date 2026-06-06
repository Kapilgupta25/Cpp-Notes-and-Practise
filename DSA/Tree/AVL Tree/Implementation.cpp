#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data, height;
        Node *left, *right;
        Node(int val){
            data=val;
            height=1;
            left=right=NULL;
        }
};

int getHeight(Node *root){
    if(!root) return 0;

    return root->height;
}

int isBalanced(Node *root){
    return getHeight(root->left)-getHeight(root->right);
}

Node* rightRotation(Node *root){
    Node *child=root->left;
    Node *childRight=child->right;

    child->right=root;
    root->left=childRight;

    // update height
    root->height=1+max(getHeight(root->left), getHeight(root->right));
    child->height=1+max(getHeight(child->left), getHeight(child->right));

    return child;
}

Node* leftRotation(Node *root){
    Node *child=root->right;
    Node *childLeft=child->left;

    child->left=root;
    root->right=childLeft;

    // update height
    root->height=1+max(getHeight(root->left), getHeight(root->right));
    child->height=1+max(getHeight(child->left), getHeight(child->right));

    return child;
}

Node *insert(Node *root, int x){
    // root doesn't exist
    if(!root){
        root=new Node(x);
    }
    // root exist
    if(root->data>x){
        root->left=insert(root->left, x);
    }
    else if(root->data<x){
        root->right=insert(root->right, x);
    }
    else{
        // don't want to insert equal values
        return root;
    }

    // update height 
    root->height=1+max(getHeight(root->left), getHeight(root->right));

    // check balancing 
    int balanced=isBalanced(root);

    // L->L => rotate right(top)
    if(balanced>1 && x<root->left->data){
        return rightRotation(root);
    }
    // L->R => rotate left(middle) => L->L => rotate right(top)
    else if(balanced>1 && x>root->left->data){            
        root->left=leftRotation(root->left);
        return rightRotation(root);
    }
    // R->R => rotate left(top)
    else if(balanced<-1 && x>root->right->data){        
        return leftRotation(root);
    }
    // R->L => rotate right(middle) => R->R => rotate left(top)
    else if(balanced<-1 && x<root->right->data){
        root->right=rightRotation(root->right);
        return leftRotation(root);
    }
    else {
        return root;
    }
}

void inorder(Node *root){
    if(!root) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){

    Node *root=NULL;

    root=insert(root, 10);
    root=insert(root, 20);
    root=insert(root, 30);
    root=insert(root, 50);
    root=insert(root, 70);
    root=insert(root, 5);
    root=insert(root, 100);
    root=insert(root, 95);
    root=insert(root, 90);
    root=insert(root, 9);


    cout<<"inorder: ";
    inorder(root);

    return 0;
}
