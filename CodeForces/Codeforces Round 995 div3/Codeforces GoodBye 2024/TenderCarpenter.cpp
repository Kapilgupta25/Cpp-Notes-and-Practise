#include<bits/stdc++.h>
using namespace std;

bool isStable(vector<int> &arr){
    int n = arr.size();
    for (int i=0; i<n-1; i++){
        if(arr[i]+arr[i]>arr[i+1] && arr[i+1]+arr[i+1]>arr[i]) return true;
    }
    return false;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        if(isStable(arr)){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
    return 0;
}
