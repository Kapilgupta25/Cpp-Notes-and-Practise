#include<iostream>
using namespace std;

int MinimumCowDist(int stalls[], int n, int k){
    int start=stalls[0],end=stalls[n-1]-stalls[0],ans;
    while(start<=end){
        int mid=start+(end-start)/2;
        int count=1,pos=stalls[0];
        for(int i=1;i<n;i++){
            if(pos+mid<=stalls[i]){
                count++;
                pos=stalls[i];
            }
        }
        if(count<k){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
    }
    return ans;
}


//STARTING OF MAIN FUNCTION

int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;

    int arr[1000];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }

// Insertion Sort:Ascending order
    for (int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }

// Binary Search
    int k;
    cout<<"Enter the number of cows:";
    cin>>k;
    int ans=MinimumCowDist( arr, n, k);
    cout<<ans<<" is the minimum distance of cows.";

    return 0;
}