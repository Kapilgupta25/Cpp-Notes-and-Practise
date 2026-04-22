#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> apples(n);
        for(int i=0;i<n;i++){
            cin>>apples[i];
        }
        sort(apples.begin(), apples.end());
        if( max(apples[n-2],(apples[n-1]-1))-(apples[0])>k){
            cout<<"Jerry"<<endl;
        }
        else{
            long long sum=accumulate(apples.begin(), apples.end(), 0ll);
            if(sum%2==0){
                cout<<"Jerry"<<endl;
            }
            else{
                cout<<"Tom"<<endl;
            }
        }
    }
}