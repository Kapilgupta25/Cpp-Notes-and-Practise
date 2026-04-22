#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n; 
        vector<int> arr(n);
        for (int i=0; i<n; i++) {
            cin >> arr[i];  
        }

        sort(arr.begin(), arr.end());
        int res = 1;
        bool flag=true;
        while(arr.size()>=2){
            res = __gcd(arr[0], arr[1]);
            for (int i=2; i<arr.size(); i++){
                res = __gcd(res, arr[i]);
            }
            if(res<=arr.size()){
                arr.pop_back();
            }
            else{
                cout<<"No"<<endl;
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl; 
        }
    }
    return 0;
}