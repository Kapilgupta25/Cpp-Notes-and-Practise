#include <iostream>
using namespace std;

int main()
{
    int n, a=0, b=1, sum=1;
    cout << "Enter the number:";
    cin >> n;
    if(n==0){
        cout<<"The "<<n<<" th fibonacci number is 0"<<endl;
        return 0;
    }
    else if(n==1){
        cout<<"The "<<n<<" th fibonacci number is 1"<<endl;
        return 0;
    }
    else if(n>1){
        for (int i = 0; i <=(n-2); i++)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
    }
    cout<<"The "<<n<<" th fibonacci number is "<<sum<<endl;
    return 0;


}