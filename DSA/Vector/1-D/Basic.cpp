#include<iostream>
#include <vector>
using namespace std;

int main(){
// initilize a vector

    // vector<int>v;
    // v.push_back(5);          // to insert value at the end
    // v.push_back(8);

    // v.pop_back();           // to remove last value of the vector

    // v.clear();              // to clear all the values of the vector but capacity remains the same
    
    // v.erase(v.begin() + 3);     // to remove 3 index element from the vector


    // vector<int>v(10,5);      //(size, initialize)

    // vector<int>v={5,10,4,87};

// taking input from user and print its output --------------------------------
    // vector<int>v(10);
    // for(int i=0;i<10;i++){
    //     cin>>v[i];
    // }

    // for(int i=0;i<2;i++){
    //     cout<<v[i]<<" ";
    // }


//------------------------------------------------------------------
    // vector<int>v;
    // v.push_back(5);
    // v.push_back(8);
    // v.push_back(6);
    // v.push_back(12);
    // v.push_back(10);
    // cout<<"Size of v:"<<v.size()<<endl;
    // cout<<"Size of v:"<<v.capacity()<<endl;

    // v.insert(v.begin()+1,100);        // to insert the element at 1st index

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<v.front()<<endl;    //return the first element of vector
    // cout<<v.back()<<endl;     //return the last element of vector
    // cout<<v.at(5)<<endl;      // return the value at given index

// copy the values of vector into another vector --------------------------------
    // vector<int>a;

    // a=v;
    // for(int i=0; i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }

// print value of vector--------------------------
    // for(auto i: v){
    //     cout<<i<<" ";
    // }

    // for(auto it=v.begin(); it!=v.end(); it++){
    //     cout<<*it<<" ";
    // }

    //for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }


// sorting of vector
    // v.push_back(1);
    // v.push_back(11);

    //sort in increasing order
    // sort(v.begin(),v.end());

    //sort in decreasing order
    // sort(v.rbegin(),v.rend());         //or  sort(v.begin(),v.end(), greater<int>());

// binary searching
    // cout<<binary_search(v.begin(), v.end(), 12);
}