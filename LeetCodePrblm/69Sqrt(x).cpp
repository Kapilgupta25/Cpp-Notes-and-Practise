#include<iostream>
using namespace std;

int sqrt(int key){
    if(key<2){
        return key;
    }
    int start=0,end=key,index=0;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid*mid==key){
            index=mid;
            return index;
        }
        else if(mid*mid>key){
            end=mid-1;
        }
        else{
            index=mid;
            start=mid+1;
        }
    }
    return index;
}


//  Starting of MAIN function

int main(){
    int key;
    cout<<"Enter the element whose square root you want to find:";
    cin>>key;
    int ans = sqrt(key);
    cout<<ans<<" is the square root of "<<key;
    

    return 0;
}