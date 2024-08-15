#include <iostream>
using namespace std;

int main(){
    int ori;
    cout<<"Enter the number:";
    cin>>ori;

    int n=ori,rem,rev=0;
    while (n>0){
        rem=n%10;
        n/=10;
        if(rev>INT32_MAX/10 || rev<INT32_MIN/10)
        return 0 ;
        rev=rev*10+rem;
    }
    cout<<"The Reverse of " << ori << " is "<< rev;
    return 0;
}