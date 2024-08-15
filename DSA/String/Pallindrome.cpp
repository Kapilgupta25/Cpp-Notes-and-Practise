#include<iostream>
using namespace std;


int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;

    int start=0,end=s.size()-1;
    while(start<end){
        if(s[start]!=s[end]){
            cout<<s<<" is not a PALLINDROME.";
            return 0;
        }
        start++,end--;
    }

    cout<<s<<" is PALLINDROME..";
    return 0;
}
