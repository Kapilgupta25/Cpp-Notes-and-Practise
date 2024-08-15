#include<iostream>
using namespace std;

int MinimumElement(int arr[], int index, int n){
    if(index==n-1){
        return arr[index];
    }
    return min(arr[index],MinimumElement(arr, index+1,n));
}

int main(){
    int arr[5]={1,2,3,4,5};
    
    int ans=MinimumElement(arr, 0, 5);
    cout<<"Minimum Element in the array is "<<ans<<endl;
    return 0;

}