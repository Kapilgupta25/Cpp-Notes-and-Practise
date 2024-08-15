#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> Factorial(int n){
    vector<int> ans(1,1);
    while(n>1){
        int carry=0,res,size=ans.size();
        for(int i=0;i<size;i++){
            res=ans[i]*n+carry;
            carry=res/10;
            ans[i]=res%10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry=carry/10;
        }
        n--;
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    int num;
    cout<<"Enter the number whose factorial you want to find:";
    cin>>num;

    vector<int> res=Factorial(num);
    cout<<"Factorial of "<<num<<" is ";
    for(int i=0;i<res.size();i++){
        cout<<res[i];
    }
    return 0;
}