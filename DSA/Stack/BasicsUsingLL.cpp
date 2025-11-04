#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class Stack{
    Node *top;
    int size;

    public:
    Stack(){
        top=NULL;
        size=0;
    }

    // PUSH
    void push(int n){
        Node *temp=new Node(n);
        // if HEAP memory is full then
        if(temp==NULL){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        temp->next=top;
        top=temp;
        size++;
        cout<<"Pushed Value:"<<n<<endl;
    }

    // POP
    void pop(){
        if(size==0){
            cout<<"Stack Underflow<<"<<endl;
            return;
        }
        else{
            cout<<"Popped Value:"<<top->data<<endl;;
            top=top->next;
            size--;
        }
    }

    // PEEK
    int peek(){
        if(size==0){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        else{
            return top->data;
        }
    }

    // IsEmpty
    bool IsEmpty(){
        return size==0;
    }

    // IsSize
    int IsSize(){
        return size;
    }
};

int main(){
    Stack S;
    S.push(2);
    S.push(99);
    S.push(7);
    S.push(9);
    
    S.pop();
    S.pop();

    cout<<"Peek Element: "<<S.peek()<<endl;

    cout<<"Stack is Empty:"<<S.IsEmpty()<<endl;

    cout<<"Size of stack:"<<S.IsSize()<<endl;
}