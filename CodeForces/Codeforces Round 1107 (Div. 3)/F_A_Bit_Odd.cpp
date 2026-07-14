#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        char buf[n];
        for(int i=0;i<n;i++) cin>>buf[i];

        vector<pair<char,int>> turn;
        for(int i=0;i<n;i++){
            if(!turn.empty() && turn.back().first==buf[i]){
                turn.back().second++;
            }
            else{
                turn.push_back({buf[i],1});
            }
        }

        int k=turn.size();
        bool aliceWins = false;
        for(int i=0;i<k;i++){
            char c=turn[i].first;
            int len=turn[i].second;
            bool exempt=(i==0 && c=='0') || (i==k-1 && c=='1');
            if(!exempt && (len%2==1)){
                aliceWins=true;
                break;
            }
        }

        cout<<(aliceWins ? "Alice" : "Bob")<<endl;
    }
    
    return 0;
}