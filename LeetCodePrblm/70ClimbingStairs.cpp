#include<iostream>
using namespace std;

int climbStairs(int n) {
    int a=1,b=2,sum;
    if(n<=2){
        return n;
    }
        for(int i=0;i<n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the number of stairs:";
    cin>>n;

    int ans=climbStairs(n);
    cout<<"Numbers of ways to climb stairs are "<<ans<<endl;
    return 0;
}