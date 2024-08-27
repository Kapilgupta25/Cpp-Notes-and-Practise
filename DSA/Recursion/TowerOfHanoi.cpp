#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void towerOfHanoi(int n, int source, int helper, int destination){
    if(n==1){
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    return;
    }

    towerOfHanoi(n-1, source, destination, helper);    // here we move (n-1) disk from source to helper with the help of destination
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    towerOfHanoi(n-1, helper, source, destination);
}


int main(){
    int n;
    cout<<"Enter the number of rings:";
    cin>>n;

    towerOfHanoi(n, 1, 2, 3);
    return 0;

}
