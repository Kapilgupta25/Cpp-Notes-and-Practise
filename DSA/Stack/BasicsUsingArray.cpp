#include<bits/stdc++.h>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top;

    public:
    // constructor
    Stack(int s){
        size=s;
        top=-1;
        arr = new int[size]; 
    }

    // PUSH
    void push(int n){
        if(top==size-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else{
            top++;
            arr[top]=n;
            cout<<"Pushed Value:"<<n<<endl;
            return;
        }
    }
    // POP
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else{
            cout<<"Popped Element:"<<arr[top]<<endl;
            top--;
            return;
        }
    }
    // PEEK
    int peek(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        else{
            return arr[top];
        }
    }
    // IsEmpty
    bool IsEmpty(){
        return top==-1? true:false;
    }
    // IsSize
    int IsSize(){
        return top+1;
    }
};

int main(){
    Stack S(5);
    S.push(2);
    S.push(9);
    S.push(7);
    S.push(3);
    
    S.pop();

    cout<<S.IsEmpty()<<endl;

    cout<<S.IsSize()<<endl;
}