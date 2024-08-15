#include<iostream>
using namespace std;

int SumOfSquare(int n){
    if(n==0){
        return 0;
    }
    return n*n+SumOfSquare(n-1);
}

int main(){
    int n;
    cout<<"Enter the Number upto which you want to find sum of square:";
    cin>>n;

    int ans=SumOfSquare(n);
    cout<<"Sum of Square of "<<n<<" is "<<ans<<endl;
    return 0;
}