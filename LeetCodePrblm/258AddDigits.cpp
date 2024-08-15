#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the number:";
    cin>>a;

    int n=a, rem,sum=0;
    while(n>0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }

    cout<<"The sum of digits of " << a << " is " << sum;
    return 0;

}
