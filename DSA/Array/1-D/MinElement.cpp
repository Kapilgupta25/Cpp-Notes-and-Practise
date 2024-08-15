#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;

// giving the size as an argument in declaration of array is bad habbit instead of this you can randomly give the larger size accourding to you!!! such as 1000..etc

    int arr[1000];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }

    cout<<"The Inputed Array is: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }

    int ans=INT32_MAX;
    for (int i=0; i<n; i++){
        if(arr[i]<ans){
            ans=arr[i];
        }
    }
    cout<<"\n"<<ans<<" is the minimum element in the array."<<endl;
}
