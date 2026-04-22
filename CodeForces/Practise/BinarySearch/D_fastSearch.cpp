#include<bits/stdc++.h>
using namespace std;

bool checkMiniIdx(int num, int x){
    return num>=x;
}

bool checkMaxiIdx(int num, int x){
    return num<=x;
}

int binary_search(vector<int> &arr, int mini, int maxi){
    int low=0,high=arr.size()-1;
    int mini_idx=-1;
    int maxi_idx=-1;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(checkMiniIdx(arr[mid], mini)){
            mini_idx=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    low=0,high=arr.size()-1;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(checkMaxiIdx(arr[mid], maxi)){
            maxi_idx=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    if(mini_idx == -1 || maxi_idx == -1 || mini_idx > maxi_idx){
        return 0;
    }

    return maxi_idx-mini_idx+1;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    sort(arr.begin(), arr.end());

    for(int i=0; i<k; i++){
        int mini,maxi;
        cin>>mini>>maxi;
        cout<<binary_search(arr, mini, maxi)<<endl;
    }

}