#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter the number:";
    cin >> n;
    if(n<2){
        cout<<n<<" is Composite number."<<endl;
        return 0;
    }
    else{
        for (int i = 2; i < n; i++)
        {
            if(n%i==0){
                count++;
                cout<<n<<" is Composite number."<<endl;
                return 0;
            }
        }
        cout<<n<<" is Prime number."<<endl;
        return 0;
    }
}