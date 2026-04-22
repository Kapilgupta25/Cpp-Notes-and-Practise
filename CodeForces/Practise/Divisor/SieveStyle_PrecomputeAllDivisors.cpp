#include<bits\stdc++.h>
using namespace std;


void preComputeAllDiviosrs(int n, vector<vector<int>> &vec){\
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j+=i){
            vec[j].push_back(i);
        }
    }
}

int main(){
    int num=12;
    vector<vector<int>> vec(num+1);
    preComputeAllDiviosrs(num, vec);

    cout<<"Divisors are: "<<endl;
    for(int i=0; i<=num; i++){
        cout<<i<<"";
        for(int j=0; j<vec[i].size(); j++){
            cout<<vec[i][j];
        }
    }

}