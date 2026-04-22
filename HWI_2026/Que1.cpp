#include<bits/stdc++.h>
using namespace std;


// -------------------- Approach 1  Time complexity O(n*m) and Space Complexity O(n) --------------------

// int solve(int n, int m, vector<int> &v, vector<int> &d){
//     int totalTastePoints=0;
//     vector<int> freq(n, 1);
//     while(m--){
//         int tastePoint=0;
//         int idx;
//         for(int i=0; i<n; i++){
//             if(tastePoint < v[i]-(d[i]*(freq[i]-1))){
//                 tastePoint = v[i]-(d[i]*(freq[i]-1));
//                 idx=i;
//             }
//         }
//         freq[idx]++;
//         totalTastePoints+=tastePoint;
//     }

//     return totalTastePoints;
// }


// int main(){
//     int n,m;

//     cout<<"Enter the type of food:";
//     cin>>n;
//     cout<<"Enter the limit:";
//     cin>>m;

//     vector<int> v(n);
//     vector<int> d(n);

//     for(int i=0; i<n; i++){
//         cout<<"Enter the "<< i+1 <<" food Type: ";
//         cin>>v[i];
//     }
//     for(int i=0; i<n; i++){
//         cout<<"Enter the decrement taste points for "<<i+1<<" food Type: ";
//         cin>>d[i];
//     }

//     cout<<"Maximum Taste Points: "<<solve(n, m, v, d)<<endl;
//     return 0;
// }





// -------------------- Approach 2  Time complexity O(m*log(n)) and Space Complexity O(n) --------------------

// int solve(int m, priority_queue<pair<int, int>> &pq, vector<int> &d){
//     int totalTastePoints=0;
//     while(m--){
//         pair<int, int> currentTastePoints=pq.top();
//         totalTastePoints+=currentTastePoints.first;
//         pq.pop();
//         currentTastePoints.first-=d[currentTastePoints.second];
//         if(currentTastePoints.first>0){
//             pq.push(currentTastePoints);
//         }
//     }

//     return totalTastePoints;
// }


// int main(){
//     int n,m;

//     cout<<"Enter the type of food:";
//     cin>>n;

//     cout<<"Enter the limit:";
//     cin>>m;

//     vector<int> v(n);
//     vector<int> d(n);

//     for(int i=0; i<n; i++){
//         cout<<"Enter the "<< i+1 <<" food Type: ";
//         cin>>v[i];
//     }
//     for(int i=0; i<n; i++){
//         cout<<"Enter the decrement taste points for "<<i+1<<" food Type: ";
//         cin>>d[i];
//     }

//     priority_queue<pair<int, int>> pq;
//     for(int i=0; i<n; i++){
//         pq.push({v[i], i});
//     }

//     cout<<"Maximum Taste Points: "<<solve(m, pq, d)<<endl;
//     return 0;
// }




// -------------------- Approach 3  Time complexity O(n*log(max(v))) and Space Complexity O(n) --------------------

long long countItmes(long long X, vector<int> &v, vector<int> &d){
    long long total=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]>=X){
            total+=((v[i]-X)/d[i])+1;
        }
    }

    return total;
}

long long solve(int n, int m, vector<int> &v, vector<int> &d){
    long long low=0, high=1e9, ans=0;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(countItmes(mid, v, d)>=m){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    long long totalTastePoints=0, count=0;

    for(int i=0; i<n; i++){
        if(v[i]>ans){
            long long k=(v[i]-ans)/d[i] +1;

            totalTastePoints+=k*(2LL*v[i] - (k-1)*d[i])/2;
            count+=k;
        }
    }

    totalTastePoints+=(m-count)*ans;
    return totalTastePoints;
}


int main(){
    int n,m;

    cout<<"Enter the type of food:";
    cin>>n;

    cout<<"Enter the limit:";
    cin>>m;

    vector<int> v(n);
    vector<int> d(n);

    for(int i=0; i<n; i++){
        cout<<"Enter the "<< i+1 <<" food Type: ";
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        cout<<"Enter the decrement taste points for "<<i+1<<" food Type: ";
        cin>>d[i];
    }

    cout<<"Maximum Taste Points: "<<solve(n, m, v, d)<<endl;
    return 0;
}