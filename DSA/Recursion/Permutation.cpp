#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


// void Permute(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited){

//     if(visited.size()==temp.size()){
//         ans.push_back(temp);
//         return ;
//     }

//     for(int i=0;i<visited.size();i++){
//         if(visited[i]==0){
//             visited[i]=1;
//             temp.push_back(arr[i]);
//             Permute(arr, ans, temp, visited);
//             visited[i]=0;
//             temp.pop_back();
//         }
//     }
// }

 
// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     int arr[n];
//     for (int i=0; i<n; i++){
//         cout<<"Enter the "<<i<<"th Element:";
//         cin>>arr[i];
//     }

//     vector<vector<int>> ans;
//     vector<int> temp;
//     vector<bool> visited(n,0);
//     Permute(arr, ans, temp, visited);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }

// reduce the space complexity
void Permute(vector<int> &arr, vector<vector<int>> &ans, int index){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int i=index;i<arr.size();i++){
        swap(arr[i],arr[index]);
        Permute(arr, ans, index+1);
        swap(arr[i],arr[index]);
    }
}

 
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }

    vector<vector<int>> ans;
    Permute(arr, ans, 0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}