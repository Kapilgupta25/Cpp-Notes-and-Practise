#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the first number:";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number";
    }
    return 0;
}

