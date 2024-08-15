#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = i; j > 1 ; j--){
            cout << " " << " "; 
        }
        for(int k=1; k<=2*(n-i)+1; k++){
            cout<< "*" << " ";
        }
        cout << endl;
    }
}
