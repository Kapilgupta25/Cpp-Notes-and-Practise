#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


// // Time complexity of O(n) and space complexity O(1)
// void MajorityElement(vector<int>& arr) {
//     int n=arr.size();
// // Subtracting 1 from each element
//     for(int i=0;i<n;i++){
//         arr[i]--;
//     }
// // Storing Occurence and number at one position
//     for(int i=0;i<n;i++){
//         int index=arr[i]%n;
//         arr[index]+=n;
//     }
// // finding occurence of the number
//     for(int i=0;i<n;i++){
//         if((arr[i]/n)>(n/2)){
//             cout<<i+1<<" is the majority element with occurence "<<arr[i]/n;
//         }
//     }
// }

void MajorityElement(vector<int>& arr){
    int n=arr.size();
    int candidate,count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            candidate=arr[i];
            count++;
        }
        else{
            if(candidate==arr[i]){
                count++;
            }
            else{
                count--;
            }
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate){
            count++;
        }
    }
    if(count>n/2){
        return candidate;
    }
    else{
        return -1;
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

    MajorityElement(vec);

}