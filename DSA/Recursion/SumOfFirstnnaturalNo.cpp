#include<iostream>
using namespace std;

int Sum(int n){
    if(n==1){
        return 1;
    }
    return n+Sum(n-1);
}

int main(){
    int n;
    cout<<"Enter the number upto which you want to find sum:";
    cin>>n;

    int ans=Sum(n);
    cout<<"Sum of first "<<n<<" Natural Number is "<<ans<<endl;
    return 0;
}