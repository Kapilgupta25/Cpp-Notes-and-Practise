#include <iostream>
using namespace std;

void Sum(int n,int m){
    int res=n+m;
    cout<<"The sum of "<<n<<" and "<<m<<" is "<<res;
}

int main(){
    int a,b;
    cout<<"Enter First Number:";
    cin>>a;
    cout<<"Enter Second Number:";
    cin>>b;
    Sum(a,b);
    return 0;
}
