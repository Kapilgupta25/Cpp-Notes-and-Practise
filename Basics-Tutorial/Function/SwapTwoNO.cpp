#include <iostream>
using namespace std;

// Pass by reference use "&"

void Swap(int &n,int &m){      
    int c;
    c=m;
    m=n;
    n=c;
    cout<<"Number after Swap: a="<<n<<" and b="<<m<<endl;
    return;
}

// function overloading: if the function name is same then it will check the datatype of the arguments and parameter and then decide which function is being called   
// that is hm ek naam ke ek se jayda function bana sakte hai pr unke parameter alag alag datatype ke hone chahiye

void Swap(float &n,float &m){      
    float c;
    c=m;
    m=n;
    n=c;
    cout<<"Number after Swap: p="<<n<<" and q="<<m<<endl;
    return;
}

int main(){
    int a,b;
    cout<<"Enter First Number:";
    cin>>a;
    cout<<"Enter Second Number:";
    cin>>b;
    cout<<"Float Number before swap: a="<<a<<" and b="<<b<<endl;
    Swap(a,b);

    float p=93.9,q=73.45;
    cout<<"Float Number before swap: p="<<p<<" and q="<<q<<endl;
    Swap(p,q);
    return 0;
}
