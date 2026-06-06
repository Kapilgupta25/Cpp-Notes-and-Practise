#include<bits/stdc++.h>
using namespace std;


class SegmentTree{
    private:
        vector<bool> arr;
        vector<bool> tree;
        int n;

        void build(int idx, int l, int r){
            if(l==r){
                tree[idx]=arr[l];
                return;
            }

            int mid=l+(r-l)/2;
            build(2*idx+1, l, mid);
            build(2*idx+2, mid+1, r);

            tree[idx]=max(tree[2*idx+1], tree[2*idx+2]);
        }

        int query(int idx, int l, int r, int k){

        }

        void update(int idx, int l, int r, int pos){

        }

        public:
        SegmentTree(const vector<bool> &input){
            arr=input;
            n=arr.size();
            tree.resize(4*n);
            build(0, 0, n-1);
        }


        int getKthOne(int k){
            return query(0, 0, n-1, k);
        }

        void setValue(int pos){
            update(0, 0, n-1, pos);
        }


};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    vector<bool> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    SegmentTree st(arr);

    for(int j=0; j<m; j++){
        int t;
        cin>>t;
        if(t==1){
            int i;
            cin>>i;
            st.setValue(i);
        }
        else{
            int k;
            cin>>k;
            cout<<st.getKthOne(k)<<endl;
        }
    }

    return 0;
}
