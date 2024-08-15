#include <iostream>
using namespace std;

int main(){
    int n,ans=0,mul=1,rem;
    cout<<"Enter the Number:";
    cin>>n;

    int ori=n;
    while (n>0){
        rem = n % 2;   // rem = n&1;(using bitwise operator instead of %)
        n /= 2;        // n = n>>1;(using rightshift as it means divide by 2)
        ans += rem * mul;
        mul *= 10;
    }
    cout<<"The conversion of "<< ori << " into binary is "<< ans <<endl;
    return 0;
}
