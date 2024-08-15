#include<iostream>
using namespace std;

int Fact(int n){
    if(n==0){
        return 1;
    }
    return n*Fact(n-1);
}

int main(){
    int n;
    cout<<"Enter the number whose factorial you want to find:";
    cin>>n;

    if(n<0){
        cout<<"Factorial does not Exist.";
        return 0;
    }
    int ans=Fact(n);
    cout<<"Factorial of "<<n<<" is "<<ans<<endl;
    return 0;
}