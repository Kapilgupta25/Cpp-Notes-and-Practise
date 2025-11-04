#include <iostream>
using namespace std;

int main(){
    int n,mul=1,rem;
    string ans = "";                       // to store the binary as a string
    cout<<"Enter the Number:";
    cin>>n;

    int ori=n;                             // store the original number
    if (n<0){
        ans="Invalid Number";
        cout<<ans<<" ";
        return 0;
    }
    else if (n == 0) {
        ans = "0";
    }
    else{
        while (n > 0) {
            int rem = n & 1;                          // get the least significant bit
            ans = to_string(rem) + ans;        // prepend the remainder to the binary string
            n = n >> 1;                              // divide the number by 2 (right shift)
        }
    }
    
    cout<<"The conversion of "<< ori << " into binary is "<< ans <<endl;
    return 0;
}
