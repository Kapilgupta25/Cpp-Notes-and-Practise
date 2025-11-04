 #include<bits/stdc++.h>
using namespace std;  

int main() {  
    int t;  
    cin>>t;
    
    while(t--){  
        int n, m, k;  
        cin>>n>>m>>k;
        
        vector<int> a(m);
        for (int i=0; i<m; i++) {  
            cin>>a[i];
        }  
        unordered_set<int> knownQue;
        for(int i=0;i<k;i++){
            int q;
            cin>>q;
            knownQue.insert(q);  
        }
        string result;
        for(int i=0; i<m; i++){  
            // Check if Monocarp knows all questions except for the i-th  
            bool canPass=true;
            for(int j=1; j<=n; j++){  
                if(j==a[i]){
                    continue;
                }
                if(knownQue.find(j)==knownQue.end()){  
                    canPass=false;
                    break;
                }
            }
            result+=canPass?'1':'0';
        }
        cout<<result<<endl;
    }  

    return 0;  
}