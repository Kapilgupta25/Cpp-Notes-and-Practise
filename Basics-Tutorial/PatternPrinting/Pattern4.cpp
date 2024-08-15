#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){           //alter for(int j=5; j>=1 ; j--) then print j
            cout << n-j+1 << " ";
        }
        cout << endl;
    }
}