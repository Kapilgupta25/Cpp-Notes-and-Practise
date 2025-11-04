#include <bits/stdc++.h>
using namespace std;

void helper() {
    int n, j, k;
    cin>>n;
    cin>>j;
    cin>>k;
    vector<int> arr(n);
    for(int &i :arr){
        cin>>i;
    }

    int maxi = *max_element(arr.begin(), arr.end());

    if(k>1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<(arr[j-1]==maxi ? "YES" : "NO")<<endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        helper();
    }
    return 0;
}