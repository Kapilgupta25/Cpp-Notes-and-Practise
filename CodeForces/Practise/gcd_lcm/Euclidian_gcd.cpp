#include<bits\stdc++.h>
using namespace std;


// concept : gcd(a,b)=gcd(b, a%b)    using euclidian algorithm

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

    cout<<"gcd is : "<< gcd_Euclidian(a, b) <<endl;
}