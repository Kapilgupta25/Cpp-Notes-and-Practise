#include<iostream>
using namespace std;

int main(){
    int size,n,index= -1;
    cout<<"Enter the size of Array:";
    cin>>size;

    int arr[1000];
    for (int i=0; i<size; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }

    cout<<"Enter the Element you want to search: ";
    cin>>n;
    for (int i = 0; i < size; i++){
        if(arr[i]==n){
            index=i;
            cout<<n<<" is located at "<<index<<" index in the given array.";
            break;
        }
    }
    cout<<index;
    return 0;
}
