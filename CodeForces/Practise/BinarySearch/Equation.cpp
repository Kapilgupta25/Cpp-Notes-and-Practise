#include<bits/stdc++.h>
using namespace std;

typedef long double ld;

bool check(ld c, ld x){
    return ((x*x)+sqrt(x))<=c;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ld c;
    cin>>c;

    ld low=0.0;
    ld high=sqrt(c);

    while(high-low>1e-6){
        ld mid=low+(high-low)/2;
        if(check(c, mid)){
            low=mid;
        }
        else{
            high=mid;
        }
    }

    cout<<fixed<<setprecision(6)<<low<<endl;

    return 0;
}


// TC: O(log(c))