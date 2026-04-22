#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    int ans=0;
    while(n){
        ans=ans+n%10;
        n=n/10;
    }
    return ans;

}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<sumOfDigits(n)<<endl;
    }
    return 0;
}
