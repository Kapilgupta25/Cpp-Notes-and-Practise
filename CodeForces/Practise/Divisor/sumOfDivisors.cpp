#include<bits\stdc++.h>
using namespace std;


long long sumOfDivisors(long long n){
    long long ans=1;
    for(int i=2; i*i<=n; i++){
        long long cnt=0;
        while(n%i==0){
            n/=i;
            cnt++;
        }
        ans*=(pow(i, cnt+1)-1)/(i-1);
    }
    if(n>1) ans*=(pow(n, 2)-1)/(n-1);
    return ans;
}

int main(){
    long long num=12;
    cout<<sumOfDivisors(num)<<endl;
}