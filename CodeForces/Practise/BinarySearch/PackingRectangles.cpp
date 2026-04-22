#include<bits/stdc++.h>
using namespace std;

bool canFit(long long w, long long h, long long n, long long x){
    long long max_w=x/w;
    long long max_h=x/h;

    if(max_w==0 || max_h==0) return false;

    return max_w >= (n+max_h-1)/max_h;
}


int main(){
    long long w, h, n;
    cin>>w>>h>>n;

    long long low=1;
    long long high=max(w, h)*n;

    long long res=high;
    while(low<=high){
        long long mid=low+(high-low)/2;
        if(canFit(w, h, n, mid)){
            res=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    cout<<res<<endl;
}