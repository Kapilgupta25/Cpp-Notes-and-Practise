#include<iostream>
using namespace std;


string DefangingIPaddress(string s){
    int start=0,end=s.size()-1;
    string ans;
    while(start<end){
        if(s[start]=='.'){
            ans+="[.]";
        }
        else{
            ans+=s[start];
        }
        start++;
    }
    return ans;
}

int main(){
    string s;
    cout<<"Enter the IP Address:";
    cin>>s;


    // int start=0,end=s.size()-1;
    // while(start<end){
    //     if(s[start]=='.'){
    //         cout<<"["<<s[start]<<"]";
    //     }
    //     else{
    //         cout<<s[start];
    //     }
    //     start++;
    // }

    cout<<"Defanged IP Address:"<<DefangingIPaddress(s)<<endl;

    return 0;
}
