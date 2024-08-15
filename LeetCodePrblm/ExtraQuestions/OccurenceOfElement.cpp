#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


// Time complexity of O(n) and space complexity O(1)
void Occurence(vector<int>& arr) {
    int n=arr.size();
// Subtracting 1 from each element
    for(int i=0;i<n;i++){
        arr[i]--;
    }
// Storing Occurence and number at one position
    for(int i=0;i<n;i++){
        int index=arr[i]%n;
        arr[index]+=n;
    }
// finding occurence of the number
    for(int i=0;i<n;i++){
        cout<<i+1<<" occurs "<<arr[i]/n<<" times.\n";
    }
}


int main(){
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;

    vector<int>vec(n);
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>vec[i];
    }

    Occurence(vec);

}