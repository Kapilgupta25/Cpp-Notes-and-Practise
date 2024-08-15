#include<iostream>
using namespace std;


int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;

    cout<<"String before reverse:"<<s<<endl;

    int start=0,end=s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++,end--;
    }

    cout<<"String after reverse:"<<s<<endl;
    return 0;
}
