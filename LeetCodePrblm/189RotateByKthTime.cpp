#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


vector<int> reverseArray(vector<int>& vec, int start, int end){
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    return vec;
}

void RotateArray(vector<int>& vec, int n, int key){
    reverseArray(vec, 0,n-1);
    reverseArray(vec, 0,key-1);
    reverseArray(vec, key,n-1);

    cout<<"\nArray after rotation: ";
    for (int i = 0; i < n; i++){
        cout<<vec[i]<< " ";
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

    int k;
    cout<<"Enter how many times you want to rotate the array:";
    cin>>k;
    int key=k%n;
    RotateArray(vec, n, key);
    
}