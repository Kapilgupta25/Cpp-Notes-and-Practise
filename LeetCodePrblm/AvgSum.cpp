#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    vector<pair<string,int>>v;

    unordered_map<string, pair<int,int>>p;
    p[v[0].first].first=v[0].second;
    p[v[0].first].second=1;

    pair<string,int>temp;
    for(int i=1;i<v.size();i++){
    if(p.find(v[i].first)!=p.end())
     p[v[i].first].first+=v[i].second;
      p[v[i].first].second++;
    }else{
     p[v[i].first].first=v[i].second;
      p[v[i].first].second=1;
    }
   
    
    return 0;
}


