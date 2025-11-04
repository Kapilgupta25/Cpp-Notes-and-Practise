#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int mini = *min_element(arr.begin(), arr.end());
        int maxi = *max_element(arr.begin(), arr.end());
        if(mini== maxi){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            for(int i=0; i < n; i++){
                if(arr[i]==maxi){
                    cout<<1<< " ";
                }
                else{
                    cout<<2<< " ";
                }
            }
        }

        cout << endl;
    }
}