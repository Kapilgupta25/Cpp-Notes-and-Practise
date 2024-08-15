#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = n+1-i; j >= 1; j--){
            cout << "*" << " ";
        }
        cout << endl;
    }
}
