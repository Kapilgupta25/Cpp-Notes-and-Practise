#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }

    cout<<"The Inputed Array is: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }

    int Fmax=INT32_MIN;
    for (int i=0; i<n; i++){
        if(arr[i]>Fmax){
            Fmax=arr[i];
        }
    }

    int Smax=INT32_MIN;
    for (int i = 0; i < n; i++){
        if(Fmax!=arr[i]){
            Smax=max(arr[i],Smax);
        }
    }

    cout<<"\n"<<Smax<<" is the second largest element in the given array."<<endl;
    
}
