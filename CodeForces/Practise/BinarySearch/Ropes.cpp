#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(vector<int> &length, double x, int k){
    int cnt=0;
    for(int i=0; i<length.size(); i++){
        cnt+=(int)(length[i]/x);
        if(cnt>=k) return true;
    }

    return false;
}

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> length(n);

    for(int i=0; i<n; i++){
        cin>>length[i];
    }

    double low=0.0;
    double high=*max_element(length.begin(), length.end());

    while(high-low>1e-6){
        double mid=low+(high-low)/2;
        if(check(length, mid, k)){
            low=mid;
        }
        else{
            high=mid;
        }
    }

    cout<<fixed<<setprecision(6)<<low<<endl;

    return 0;
}


// tc: O(n*log(high))
// sc: O(1)
