#include<iostream>
#include<vector>
using namespace std;

vector<int> prefixSum(vector<int>& v, int n){
    vector<int>prefix(n);
    prefix[0]=v[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+v[i];
    }
    return prefix;
}


int main(){
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;

    vector<int>vec(n);
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>vec[i];
    }

    vector<int>ans = prefixSum(vec, n);
    cout<<"The Prefix sum is: ";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" "; 
    }



    return 0;
}
