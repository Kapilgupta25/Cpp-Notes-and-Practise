#include<iostream>
using namespace std;

// int CountVowel(string s, int index, int count, int n){
//     if(index>=n){
//         return count;
//     }
//     if(s[index] == 'a'|| s[index] =='e'|| s[index] =='i'|| s[index] =='o'|| s[index] =='u'){
//         count++;
//     }
//     return CountVowel(s, index+1, count, n);
// }

// int main(){
//     string s;
//     cout<<"Enter the string:";
//     cin>>s;

//     int n=s.size();
//     int ans=CountVowel(s, 0, 0, n);
//     cout<<ans<<" Vowels are present in "<<s<<endl;
//     return 0;

// }


int CountVowel(string s, int index){
    if(index==-1){
        return 0;
    }
    if(s[index] == 'a'|| s[index] =='e'|| s[index] =='i'|| s[index] =='o'|| s[index] =='u'){
        return 1+ CountVowel(s,index-1);
    }
    return CountVowel(s, index-1);
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;

    int n=s.size();
    int ans=CountVowel(s, n-1);
    cout<<ans<<" Vowels are present in "<<s<<endl;
    return 0;

}