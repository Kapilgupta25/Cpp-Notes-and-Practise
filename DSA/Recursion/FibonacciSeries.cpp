#include<iostream>
using namespace std;

int Fibonacci(int n){
    if(n<=1){
        return n;
    }

    return Fibonacci(n-1)+Fibonacci(n-2);
}

int main(){
    int n;
    cout<<"Enter the Number whose fibonacii you want to find:";
    cin>>n;

    int ans=Fibonacci(n);
    cout<<n<<"th Fibonacci Number is "<<ans<<endl;
    return 0;
}