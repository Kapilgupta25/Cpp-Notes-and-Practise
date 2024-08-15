#include<iostream>
using namespace std;

int minEatingSpeed(int piles[], int n, int h){
    int start=0,end=0,ans;
    long long sum=0;

// start= (aum of array)/(no. of hrs) and end= (max of array)
    for(int i=0;i<n;i++){
        sum+=piles[i];
        end=max(end,piles[i]);
    }
    start=sum/h;
    if(!start){
        start=1;
    }
    while(start<=end){
        int mid=start+(end-start)/2;
        int total_time=0;
        for(int i=0; i<n; i++){
            total_time=piles[i]/mid;
            if(piles[i]%mid){
                total_time++;
            }
        }

        if(total_time>h){
            start=mid+1;
        }
        else{
            ans=mid;
            end=mid-1;
        }
    }
    return ans;
}


//STARTING OF MAIN FUNCTION

int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;

    int arr[1000];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }


// Binary Search
    int k;
    cout<<"Enter the minimum number of hours a KOKO can take:";
    cin>>k;
    int ans=minEatingSpeed( arr, n, k);
    cout<<ans<<" is the speed of eating banana in one hour.";

    return 0;
}