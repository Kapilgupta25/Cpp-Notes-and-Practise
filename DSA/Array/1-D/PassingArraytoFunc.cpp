#include<iostream>
using namespace std;


void PrintArr(int a[], int m){

    cout<<"Size of A is:"<<sizeof(a)<<endl;

    cout<<"The Inputed Array is: ";
    for (int i = 0; i < m; i++){
        cout<<a[i]<< " ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }
    cout<<"Size of Array is:"<<sizeof(arr)<<endl;;

    PrintArr(arr,n);
}