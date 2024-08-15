#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    for (int i = 1; i <= n; i++){
        char c = 'a'+ (i-1);
        for (int j = 1; j <= n; j++){
            cout << c << " ";
        }
        cout << endl;
    }
}
