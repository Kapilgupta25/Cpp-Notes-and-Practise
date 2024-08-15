#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the year:";
    cin>> n;
    if (n%400 == 0){
        cout<< n <<" is the Leap Year.";
        return 0;
    }
    else if (n%4 == 0 && n%100 !=0){
        cout<< n <<" is the Leap Year.";
        return 0;
    }
    else{
        cout<< n << " is not a Leap Year.";
        return 0;
    }
    
}