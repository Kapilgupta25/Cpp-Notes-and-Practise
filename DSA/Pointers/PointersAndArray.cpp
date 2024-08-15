#include<iostream>
using namespace std;


int main(){
    int arr[5]={1,2,3,4,5};
    int *prt=arr;

    //print the address of first element or 0 index
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<prt<<endl;

    //print the address of second element or 1 index
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;
    cout<<prt+1<<endl;

    // print the values of array using pointer
    for(int i=0;i<5;i++){
        cout<<*(prt+i)<<" ";
        //cout<<prt[i]<<" ";
        //cout<<*(arr+i)<<" ";
        //cout<<arr[i]<<" ";
    }

cout<<endl;
    // print the address of array using pointer
    for(int i=0;i<5;i++){
        //cout<<arr+i<<;
        cout<<&prt[i]<<endl;

    }
    return 0;
}