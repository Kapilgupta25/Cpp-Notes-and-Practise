#include<bits/stdc++.h>
using namespace std;


int SumOfSeq(vector<int>&seq, int n){
    int pos=0,neg=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            pos+=seq[i];
        }
        else{
            neg+=seq[i];
        }
    }
    return pos-neg;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> seq(n);
        for(int i=0;i<n;i++){
            cin>>seq[i];
        }
        cout<<SumOfSeq(seq, n)<<endl;
    }
    return 0;
}
