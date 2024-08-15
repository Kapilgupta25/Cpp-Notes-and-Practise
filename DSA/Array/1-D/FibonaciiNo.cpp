#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the fibonacii number you want:";
    cin>>n;
    int arr[1000];
// first fibonacii number is 0 and second is 1 (already given)
    arr[0]=0;
    arr[1]=1;

    for (int i=2; i<n; i++){
        arr[i]=arr[i-1]+arr[i-2];
    }

    cout<<arr[n-1]<<" is the "<<n<<" fibonacii number.";
    return 0;
}