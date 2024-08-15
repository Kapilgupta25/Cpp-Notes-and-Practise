#include <iostream>
#include <math.h>
using namespace std;

int countDigit(int n){
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}

void Armstrong(int num, int digit){
    int n=num,rem,ans=0;
    while(n!=0){
        rem = n%10;
        n/=10;
        ans=ans+pow(rem, digit);
    }
    if(ans==num){
        cout<<num<<" is ARMSTRONG number.";
    }
    else{
        cout<<num<< " is not an ARMSTRONG number.";
    }
}

int main(){
    int num;
    cout<<"Enter the Number:";
    cin>>num;
    int digit = countDigit(num);
    Armstrong(num,digit);
    return 0;
}
