#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// // Time complexity of O(n*m) and Space complexity of O(1)
// int StringMatching(string s,string target){
//     int n=s.size(),m=target.size(),first,second;
//     for(int i=0;i<n-m;i++){
//         first=i,second=0;
//         while(second<m){
//             if(s[first]!=target[second]){
//                 break;
//             }
//             first++;
//             second++;
//         }
//         if(second==m){
//             return first-second;
//         }
//     }
//     return -1;
// }


// Time complexity of O(n+m) and Space complexity of O(m)
int StringMatching(string s,string target){
    int n=s.size(),m=target.size(),prefix=0,suffix=m-1;

    // finding the LPS of targeted string
    vector<int> lps(m, 0);
    while(suffix<m){
        if(target[prefix]==target[suffix]){
            lps[suffix]=prefix+1;
            prefix++,suffix--;
        }
        else{
            if(prefix==0){
                lps[suffix]=0;
                suffix++;
            }
            else{
                prefix=lps[prefix-1];
            }
        }
    }

    // finding the targated substring in the main string
    int first=0,second=0;
    while(first<n && second<m){
        if(s[first]==target[second]){
            first++;
            second++;
        }
        else{
            if(second==0){
                first++;
            }
            else{
                second=lps[second-1];
            }
        }
    }
    if(second==m){
        return first-second;
    }
    else{
        return -1;
    }
}


int main(){
    string s, target;
    cout<<"Enter the main String: ";
    cin>>s;
    cout<<"Enter the substring you want match:";
    cin>>target;

    int ans=StringMatching(s, target);
    cout<<"Longest Prefix Suffix:"<<ans<<endl;
    return 0;
}
