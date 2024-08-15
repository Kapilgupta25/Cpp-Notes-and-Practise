#include<iostream>
#include<vector>
using namespace std;

// Time complexity and Space complexity of O(n)
string addString(string s1,string s2){
    int index1=s1.size()-1,index2=s2.size()-1;
    int carry=0,sum=0;
    string ans;
    while(index2>=0){
        sum=carry+(s1[index1]-'0')+(s2[index2]-'0');
        carry=sum/10;
        char c='0'+sum%10;
        ans+=c;
        index1--,index2--;
    }

    while(index1>=0){
        sum=s1[index1]-'0'+carry;
        carry=sum/10;
        char c='0'+sum%10;
        ans+=c;
        index1--;
    }
    if(carry){
        char c='0'+carry;
        ans+=c;
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    string s1,s2;
    cout<<"Enter first string number:";
    cin>>s1;
    cout<<"Enter second string number:";
    cin>>s2;


    cout<<"String after addition: "<<addString(s1, s2)<<endl;
    return 0;
}
