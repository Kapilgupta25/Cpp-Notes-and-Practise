#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        long long cycleDist=a+b+c;
        long long completeCycle=n/cycleDist;

        long long distCovered=cycleDist*completeCycle;

        long long remDist=n-distCovered;
        int days=3*completeCycle;
        if(remDist>0){
            days++;
            remDist-=a;
        }
        if(remDist>0){
            days++;
            remDist-=b;
        }
        if(remDist>0){
            days++;
        }

        cout<<days<<endl;
	}
}

