#include <bits/stdc++.h>
using namespace std;

const int MAXN=1000001;
int smallPrime[MAXN];

void preComputeFactors(){
    for(int i=2;i<MAXN;i++){
        if(smallPrime[i]==0){
            for(int j=i;j<MAXN;j+=i){
                if(smallPrime[j]==0){
                    smallPrime[j]=i;
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    preComputeFactors();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int totalPrimes=0, uniquePrime=0, x=n;
        while(x>1){
            int p=smallPrime[x];
            uniquePrime++;
            while(x%p==0){ 
                x/=p;
                totalPrimes++;
            }
        }
        
        cout<<totalPrimes+uniquePrime-1<<endl;
    }

    return 0;
}