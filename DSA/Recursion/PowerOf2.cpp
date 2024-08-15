#include<iostream>
using namespace std;

int Power(int num, int pow){
// this (pow==1) is optional it does not effect the code
    // if(pow==1){
    //     return num;
    // }
    if(pow==0){
        return 1;
    }
    return num*Power(num, pow-1);
}

int main(){
    int num,pow;
    cout<<"Enter the Number:";
    cin>>num;
    cout<<"Enter the power raised:";
    cin>>pow;

    int ans=Power(num, pow);
    cout<<num<<" raised to the power "<<pow<<" is "<<ans<<endl;
    return 0;
}