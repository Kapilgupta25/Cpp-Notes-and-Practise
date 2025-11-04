#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int i=1, j=n;
        for(int k=0; k<n-1; k++){
            if(arr[k]==arr[k+1]){
                i++;
            }
            else{
                break;
            }
        }
        if(i==n){
            cout<<0<<endl;
        }
        else{
            for(int k=n-1; k>0; k--){
                if(arr[k]==arr[k-1]){
                    j--;
                }
                else{
                    break;
                }
            }
            if(arr[0]==arr[n-1]){
                j--,i++;
                cout<<j-i+1<<endl;
            }
            else if(i>n-j){
                cout<<n-i<<endl;
            }
            else{
                j--;
                cout<<j<<endl;
            }
        }
    }
    return 0;
}
