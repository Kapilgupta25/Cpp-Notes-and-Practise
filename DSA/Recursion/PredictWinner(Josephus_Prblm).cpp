#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


// Time complexity of O(n^2) and Space complexity of O(n)

// int Winner(vector<int>&person, int n, int index, int &person_left, int k){
//     if(person_left==1){
//         for(int i=0;i<n;i++){
//             if(person[i]==0){
//                 return i;
//             }
//         }
//     }
//     int kill=(k-1)%person_left;
//     while(kill--){
//         index=(index+1)%n;
//         while(person[index]==1){
//             index=(index+1)%n;
//         }
//     }
//     person[index]=1;
//     while (person[index]==1){
//         index=(index+1)%n;
//     }
    
//     return Winner(person, n, index, person_left-1, k);
// }



int Winner(int n, int k){
    if(n==1){
        return 0;
    }
    
    return (Winner(n-1, k)+k)%n;
}

int main(){
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;
    vector<int>person(n);
    for (int i=0; i<n; i++){
        person[i]=i;
    }

    int k;
    cout<<"Enter the interval of deletion:";
    cin>>k;
    // int ans = Winner(person, n, 0, n, k);
    int ans = Winner(n,k);
    cout<<ans<<" is the winner!!"<<endl;
    return 0;
}
