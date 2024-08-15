#include<iostream>
#include<vector>
using namespace std;

int num(char c){
    if(c=='I'){
        return 1;
    }
    else if(c=='V'){
        return 5;
    }
    else if(c=='X'){
        return 10;
    }
    else if(c=='L'){
        return 50;
    }
    else if(c=='C'){
        return 100;
    }
    else if(c=='D'){
        return 500;
    }
    else{
        return 1000;
    }
}

int RomantoInteger(string &s){
    int n=s.size();
    int sum=0,index=0;
    while(index<n-1){
        if(num(s[index])<num(s[index+1])){
            sum-=num(s[index]);
        }
        else{
            sum+=num(s[index]);
        }
        index++;
    }
    sum+=num(s[n-1]);
    return sum;
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;

    int ans=RomantoInteger(s);
    cout<<"Integer value of "<<s<<":"<<ans<<endl;
    return 0;
}
