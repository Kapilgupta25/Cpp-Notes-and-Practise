#include<iostream>
using namespace std;


void rotateClockwise(string &s){
    int n=s.size();
    char temp=s[n-1];
    for(int i=n-2;i>=0;i--){
        s[i+1]=s[i];
    }
    s[0]=temp;
}

void rotateAntiClockwise(string &s){
    int n=s.size();
    char temp=s[0];
    for(int i=1;i<n;i++){
        s[i-1]=s[i];
    }
    s[n-1]=temp;
}

int main(){
    string s1,s2;
    cout<<"Enter first String:";
    cin>>s1;
    cout<<"Enter second String:";
    cin>>s2;

    if(s1.size()!=s2.size()){
        cout<<"String size is different.."<<endl;
        return 0;
    }

    string clockwise,anticlockwise;
    clockwise=s1;
    rotateClockwise(clockwise);
    rotateClockwise(clockwise);
    if(clockwise==s2){
        cout<<s1<<" is roated 2 time in clockwise direction to get "<<s2<<endl;
        return 0;
    }

    anticlockwise=s1;
    rotateAntiClockwise(anticlockwise);
    rotateAntiClockwise(anticlockwise);
    if(anticlockwise==s2){
        cout<<s1<<" is roated 2 time in Anti-Clockwise direction to get "<<s2<<endl;
        return 0;
    }

    cout<<"String are not equal after rotation"<<endl;
    return 0;
}
