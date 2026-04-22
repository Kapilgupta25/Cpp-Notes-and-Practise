#include<bits/stdc++.h>
using namespace std;

bool check_upperbound(int num, int x){
    return num<=x;
}

int binary_fun(vector<int> &arr, int x){
    int low=0, high=arr.size()-1;
    int ans=-1;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(check_upperbound(arr[mid], x)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return ans+1;
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
        
        cout<<binary_fun(arr, x)<<endl;
    }

}