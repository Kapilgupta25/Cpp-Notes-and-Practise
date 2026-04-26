#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1,2,5,9,4};
    priority_queue<int> pq(arr.begin(),arr.end());

    for(int i=0; i<arr.size(); i++){
       cout<<pq.top()<<endl;
       pq.pop();
    }

    return 0;
}