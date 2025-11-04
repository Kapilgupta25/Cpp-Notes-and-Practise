#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    stack<int> S;
    S.push(9);
    S.push(10);
    S.push(3);

    cout<<S.size()<<endl;

    S.pop();

    cout<<S.size()<<endl;
    cout<<S.empty()<<endl;
    
    return 0;
}