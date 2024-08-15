#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter the number:";
    cin >> a;

    for (int i = 1; i <= a; i++){
        if (i * i > a){
            i--;
            cout << "square root of " << a << " is " << i;
            return 0;
        }
        else if (i * i == a){
            cout << "square root of " << a << " is " << i;
            return 0;
        }
    }
    return 0;
}
