#include<bits\stdc++.h>
using namespace std;


// concept : lcm(a,b)= (a*b)/gcd(a,b)    using euclidian algorithm

// iterative approch
long long gcd_Euclidian(long long a, long long b){
    a=llabs(a), b=llabs(b);
    while(b!=0){
        long long r=a%b;
        a=b;
        b=r;
    }
    return a;
}

// // recursive approch
// long long gcd_Euclidian(long long a, long long b){
//     a=llabs(a), b=llabs(b);
//     return (b==0) ? a : gcd_Euclidian(b, a%b);
// }

int main(){
    long long a, b;
    cin>> a >> b;

    cout<<"lcm is : "<< (a/gcd_Euclidian(a, b))*b <<endl;
}