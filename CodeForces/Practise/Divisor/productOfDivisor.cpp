#include<bits\stdc++.h>
using namespace std;


long long productOfDivisors(long long n){
    long long num =n;
    long long ans=1;
    for(int i=2; i*i<=n; i++){
        long long cnt=0;
        while(n%i==0){
            n/=i;
            cnt++;
        }
        ans*=(cnt+1);
    }
    if(n>1) ans*=2;
    return pow(num, ans/2);
}

int main(){
    long long num=12;
    cout<<productOfDivisors(num)<<endl;
}