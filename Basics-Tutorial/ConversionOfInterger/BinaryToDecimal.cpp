#include <iostream>
using namespace std;

int main(){
    int n,ans=0,mul=1,rem;
    cout<<"Enter the Binary Number:";
    cin>>n;

    int ori=n;
    while (n>0){
        rem = n % 10;
        n /= 10;
        ans += rem * mul;
        mul *= 2;
    }
    cout<<"The conversion of "<< ori << " into decimal is "<< ans <<endl;
    return 0;
}
