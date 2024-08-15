#include<iostream>
using namespace std;

// // time complexity of O(n) and space complexity of O(n)
// int trappingRainWater(int arr[], int n){
//     int Water=0,maxLH[n],maxRH[n];
//     maxLH[0]=0;
//     maxRH[n-1]=0;
//     for(int i=1;i<n;i++){
//         maxLH[i]=max(maxLH[i-1],arr[i-1]);
//     }
//     for(int i=n-2;i>=0;i--){
//         maxRH[i]=max(maxRH[i+1],arr[i+1]);
//     }
//     for(int i=0;i<n;i++){
//         int unit=min(maxLH[i],maxRH[i]);
//         if(unit-arr[i]>0){
//             Water+=unit-arr[i];
//         }
//     }
//     return totalUnits;
// }


// time complexity of O(n) and space complexity of O(1)
int trappingRainWater(int arr[], int n){
    int Water=0,maxLeft=0,maxRight=0,maxHeight=0,index=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxHeight){
            maxHeight=arr[i];
            index=i;
        }
    }
    for(int i=0;i<index;i++){
        if(maxLeft>arr[i]){
            Water+=maxLeft-arr[i];
        }
        else{
            maxLeft=arr[i];
        }
    }
    for(int i=n-1;i>index;i--){
        if(maxRight>arr[i]){
            Water+=maxRight-arr[i];
        }
        else{
            maxRight=arr[i];
        }
    }
    return Water;
}


int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;

    int arr[1000];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Heigth of building:";
        cin>>arr[i];
    }

    int ans=trappingRainWater(arr, n);
    cout<<ans<<" units of rain water can be trapped between the building.";
    return 0;
}
