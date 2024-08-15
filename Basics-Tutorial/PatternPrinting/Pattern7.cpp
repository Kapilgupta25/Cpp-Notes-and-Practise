// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, a=1;
//     cout << "Enter the number of rows:";
//     cin >> n;
//     for (int i = 1; i <= n; i++){
//         for (int j = 1; j <= n; j++){
//             cout << a << " ";
//             a++;
//         }
//         cout << endl;
//     }
// }



// without using third variable

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << (i-1)*5+j << " ";
        }
        cout << endl;
    }
}

