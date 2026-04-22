#include<bits/stdc++.h>
using namespace std;


bool BinarySearch(vector<int>& arr, int x){
    int low=0,high=arr.size()-1;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            return true;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return false;
}

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<k; i++){
        int x;
        cin>>x;
        if(BinarySearch(arr, x)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}