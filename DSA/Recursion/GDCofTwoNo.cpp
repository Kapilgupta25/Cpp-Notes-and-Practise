#include<iostream>
using namespace std;

// Greatest Common Divisor
int GDC(int n, int m){
    if(m==0){
        return n;
    }
    return GDC(m, n%m);
}


int main(){
    int n,m;
    cout<<"Enter the first Number:";
    cin>>n;
    cout<<"Enter the Second Number:";
    cin>>m;


    int ans=GDC(n,m);
    cout<<ans<<" is the Greatest Common Divisor of "<<n<<" and "<<m<<endl;
    return 0;
}