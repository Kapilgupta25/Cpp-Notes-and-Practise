#include<iostream>
using namespace std;

int main(){
    int num,occ;
    cout<<"Enter the Number between (1-99):";
    cin>>num;
    cout<<"Enter the occurence of that number:";
    cin>>occ;
    int ans=occ*100+num;
    cout<<ans<<" we have store "<<num<<" and "<<occ<<" in one postion.";
    int number=ans%100;
    int occurence=ans/100;
    cout<<"\n "<<number<<" and "<<occurence<<endl;
}