#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number upto which Array is made:";
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }

    int OrignalSum=(n*(n+1))/2;

    int sum=0;
    for (int i=0; i<n; i++){
        sum=sum+arr[i];
    }

    cout<<OrignalSum-sum<<" is the missing Element in the given array.";

}