#include <iostream>
using namespace std;

int main(){
    int n,i=1,sum=0;
    cout << "Enter the number:";
    cin >> n;
    do
    {
        sum=sum+i;
        i++;
    } while (i<=n);
    cout << "The sum of " << n << " natural numbers are: " << sum;
}
