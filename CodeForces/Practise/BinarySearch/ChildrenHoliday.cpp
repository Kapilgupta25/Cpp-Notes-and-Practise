// #include<bits/stdc++.h>
// using namespace std;

// struct asst{
//     int t,z,y;
// };

// bool isBallonsPossible(int t, int z, int y, int ballons, int time){
//     long long batchTime = 1LL * z * t + y;
//     long long batches = ballons / z;
//     long long currTime = 0;
//     bool flag=(ballons%z==0)? 1:0;
//     if(flag){
//         currTime=(batchTime*batches)-y;
//     }
//     else{
//         currTime=(batchTime*batches)+(ballons%z)*t;
//     }

//     return (currTime<=time);
// }

// bool isPossible(asst *arr, int n, int m, int time){
//     long long totalBallons=0;
//     for(int i=0; i<n; i++){
//         int t=arr[i].t;
//         int z=arr[i].z;
//         int y=arr[i].y;

// // here we have fixed the TIME and applying """BINARYSEARCH""" to find max no. of ballons that can be infilate in the given TIME....
//         int minBallons=0;
//         int maxBallons=(int)1e9;
//         while(maxBallons>minBallons+1){
//             int mid=minBallons+(maxBallons-minBallons)/2;
//             if(isBallonsPossible(t, z, y, mid, time)){
//                 minBallons=mid;
//             }
//             else{
//                 maxBallons=mid;
//             }
//         }
//         totalBallons+=minBallons;
//     }

//     return (totalBallons>=m);
// }


// int countMaxBallons(int t, int z, int y, int maxTime){
//     int batchTime=(z*t)+y;
//     int batchCount=maxTime/batchTime;
//     int remTime=maxTime%batchTime;
//     int totalBallons=0;
//     totalBallons+=(batchCount*z);
//     if(remTime!=0){
//         totalBallons+=(min(z, remTime/t));
//     }

//     return totalBallons;
// }

// int main(){
//     int m,n;
//     cin>>m>>n;

//     asst arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i].t>>arr[i].z>>arr[i].y;
//     }

// // here in this """BINARYSEARCH""" we are calculating the time that in which we can infilate m balloons and
// // if we can then we place the maxTime pointer to the mid and look for the decreasing the time....
//     int minTime=-1;
//     int maxTime=(int)1e9;
//     while(maxTime>minTime+1){
//         int mid=minTime+(maxTime-minTime)/2;
//         if(isPossible(arr, n, m, mid)){
//             maxTime=mid;
//         }
//         else{
//             minTime=mid;
//         }
//     }

//     cout<<maxTime<<endl;

//     vector<int> ballonsByEachAss(n, 0);
//     for(int i=0; i<n; i++){
//         int t=arr[i].t;
//         int z=arr[i].z;
//         int y=arr[i].y;

//         ballonsByEachAss[i]=countMaxBallons(t, z, y, maxTime);
//     }
//     int totalBallons=0;
//     for(int i=0; i<n; i++){
//         if(totalBallons+ballonsByEachAss[i]<=m){
//             cout<<ballonsByEachAss[i]<<" ";
//             totalBallons+=ballonsByEachAss[i];
//         }
//         else{
//             if(totalBallons==m){
//                 cout<<0<<" ";
//             }
//             else{
//                 cout<<(m-totalBallons);
//                 totalBallons=m;
//             }
//         }
//     }
//     cout<<endl;

//     return 0;
// }

// // old TC: O( log(time*n*log(totalBallons)) )





#include<bits/stdc++.h>
using namespace std;

struct asst{
    int t,z,y;
};

int countMaxBallons(int t, int z, int y, int maxTime){
    int batchTime = (z * t) + y;
    int batchCount = maxTime / batchTime;
    int remTime = maxTime % batchTime;

    int totalBallons = batchCount * z;
    totalBallons += min(z, remTime / t);

    return totalBallons;
}

bool isPossible(asst *arr, int n, int m, int time){
    int totalBallons = 0;

    for(int i = 0; i < n; i++){
        totalBallons += countMaxBallons(arr[i].t, arr[i].z, arr[i].y, time);

        if(totalBallons >= m) return true;
    }

    return false;
}

int main(){
    int m,n;
    cin >> m >> n;

    asst arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i].t >> arr[i].z >> arr[i].y;
    }

    int minTime = 0;
    int maxTime = 1e9;
    int ans = maxTime;

    while(minTime <= maxTime){
        int mid = minTime + (maxTime - minTime) / 2;

        if(isPossible(arr, n, m, mid)){
            ans = mid;
            maxTime = mid - 1;
        }
        else{
            minTime = mid + 1;
        }
    }

    cout << ans << endl;

    int totalBallons = 0;

    for(int i = 0; i < n; i++){
        int canMake = countMaxBallons(arr[i].t, arr[i].z, arr[i].y, ans);

        int give = min(canMake, m - totalBallons);

        cout << give << " ";

        totalBallons += give;
    }

    return 0;
}
// new TC: O( log(time*n) )