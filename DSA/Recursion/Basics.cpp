#include<iostream>
using namespace std;

// void Birthday(int n){
//     if(n==0){
//         cout<<"Happy Birthday";
//         return;
//     }
//     cout<<n<<" Days left for birthday."<<endl;;
//     Birthday(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the number of days left for birthday:";
//     cin>>n;

//     Birthday(n);
//     return 0;
// }


// // 1. Printing all natural numbers upto "n"

// void NaturalNumber(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<endl;
//     NaturalNumber(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the number upto which you want to print:";
//     cin>>n;

//     NaturalNumber(n);
//     return 0;
// }


// // 2. Printing numbers from 1 to "n" using two argumenet

// void NaturalNumber(int num, int n){
//     if(num==n){
//         cout<<num<<endl;
//         return;
//     }
//     cout<<num<<endl;
//     NaturalNumber(num+1, n);
// }

// int main(){
//     int n;
//     cout<<"Enter the number upto which you want to print:";
//     cin>>n;

//     NaturalNumber(1, n);
//     return 0;
// }


// // 3. Printing numbers from 1 to "n" using single argument

void NaturalNumber(int n){
    if(n==0){
        return;
    }
    NaturalNumber(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cout<<"Enter the number upto which you want to print:";
    cin>>n;

    NaturalNumber(n);
    return 0;
}
