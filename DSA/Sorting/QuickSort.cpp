#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int Partition(int arr[],int start,int end){
    int pos=start;
    for(int i=start;i<end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[pos],arr[i]);
            pos++;
        }
    }
    return pos-1;
}

void QuickSort(int arr[], int start, int end){
    if(start>=end){
        return ;                // base condition as until single element is left
    }

// select the last element and place it on it's sorted position and divide the array into two part 
    int pivot = Partition(arr, start, end);
// left side of pivot element has elements less than or equal to the pivot element
    QuickSort(arr, start, pivot-1);
// right side of pivot element has elements more than or equal to the pivot element
    QuickSort(arr, pivot, end);
}

int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;

    int arr[1000];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }
    cout<<"Array before sorting is: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }


// Quick Sort: ismein hm ek pivoit Element select krte hai or usko apnisahi position pr set kr dete hai or fir uske baad lft side mein uss se chhote elements and right side mein uss se badhe elements ki do alag array banate hai and ye process jab tak repeat krte hai jab tak single element na raha jaye
// Time Complexity of average case O(n*log(n)) and Space Complexity of average case O(log(n))
// Time Complexity of worst case O(n^2) and Space Complexity of worst case O(n)  [only in two case if array is in DESENDING or ASCENDING order]

    QuickSort(arr, 0, n-1);

    cout<<"\nArray sorted in ascending Order: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}