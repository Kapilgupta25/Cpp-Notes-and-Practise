#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> st;
    int cnt=0;
    for(char c:s){
        if(s.empty()){
            s.push_back(c);
        }
        else if(!st.empty() && st.top() == c){
            st.pop();
            cnt++;
        }
        else{
            st.push(c);
        }
    }

    if(cnt % 2 == 0){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}
