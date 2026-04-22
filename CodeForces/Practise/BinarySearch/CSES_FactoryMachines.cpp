#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, long long x, long long t){

    for(int i=0; i<arr.size(); i++){
        long long used=x/arr[i];
        t-=used;

        if(t<=0) return true;
    }

    return false;
}

int main(){
    long long n,t;
    cin>>n>>t;

    vector<int> machineTime(n);

    for(int i=0; i<n; i++){
        cin>>machineTime[i];
    }

    long long high=*max_element(machineTime.begin(), machineTime.end())*1LL*t;
    long long low=1;

    long long res=0;
    while(low<=high){
        long long mid=low+(high-low)/2;
        if(isPossible(machineTime, mid, t)){
            res=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    cout<<res<<endl;

    return 0;
}

