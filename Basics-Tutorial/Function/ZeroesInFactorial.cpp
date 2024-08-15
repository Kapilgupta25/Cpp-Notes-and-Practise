#include<iostream>
using namespace std;

int Zeroes(int n){
    int ans=0;
    while(n>=5){
        ans = ans + n/5;
        n /= 5;
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"The factorial of "<<num<<" has "<<Zeroes(num)<<" trailing zeroes."<<endl;
    return 0;
}