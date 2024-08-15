#include<iostream>
using namespace std;

int CheckPallindrome(string s, int start, int end){
    if(start>=end){
        return 1;
    }
    if(s[start]!=s[end]){
        return 0;
    }
    return CheckPallindrome(s,start+1,end-1);
}

int main(){
    string s;
    cout<<"Enter the string which you want to check whether it is pallindrome or not:";
    cin>>s;

    int n=s.size();
    int ans=CheckPallindrome(s, 0, n-1);
    if(ans==1){
        cout<<s<<" is Pallindrome.";
    }
    else{
        cout<<s<<" is not Pallindrome";
    }
    return 0;

}