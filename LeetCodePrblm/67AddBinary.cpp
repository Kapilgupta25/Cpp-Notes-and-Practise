#include<iostream>
#include<algorithm>
using namespace std;

string addBinary(string a,string b){
    string ans;
    int i=a.size()-1, j=b.size()-1, carry;
    while(i>=0 || j>=0 || carry){
        if(i>=0){
            carry += a[i] - '0';
            i--;
        }
        if(j>=0){
            carry +=b[j]-'0';
            j--;
        }
        ans+=carry%2+'0';
        carry /=2;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    string a,b;
    cout<<"Enter the first binary number:";
    cin>>a;
    cout<<"Enter the second binary number:";
    cin>>b;

    string ans = addBinary(a,b);
    cout<<"Addition of "<<a<<" and "<<b<<" in binary is "<<ans<<endl;
    return 0;
}