#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Node{
    ll sum;
    ll pref;
    ll suff;
    ll ans;
};

class SegmentTree{
    private:
        vector<Node> tree;
        vector<ll> arr;
        int n;

        Node merge(const Node &left, const Node &right){
            Node res;
            res.sum=left.sum+right.sum;
            res.pref=max(left.pref, left.sum+right.pref);
            res.suff=max(right.suff, right.sum+left.suff);
            res.ans=max({left.ans, right.ans, left.suff+right.pref});

            return res;
        }


        void build(int idx, int l, int r){
            if(l==r){
                tree[idx].sum=arr[l];
                tree[idx].pref=max(0LL, arr[l]);
                tree[idx].suff=max(0LL, arr[l]);
                tree[idx].ans=max(0LL, arr[l]);
                return ;
            }

            int mid=l+(r-l)/2;
            build(2*idx+1, l, mid);
            build(2*idx+2, mid+1, r);

            tree[idx]=merge(tree[2*idx+1], tree[2*idx+2]);
            
        }

        void update(int idx, int l, int r, int pos, ll val){
            if(l==r){
                arr[l]=val;
                tree[idx].sum=val;
                tree[idx].pref=max(0LL, val);
                tree[idx].suff=max(0LL, val);
                tree[idx].ans=max(0LL, val);
                return ;
            }

            int mid=l+(r-l)/2;
            if(pos<=mid){
                update(2*idx+1, l, mid, pos, val);
            }
            else{
                update(2*idx+2, mid+1, r, pos, val);
            }

            tree[idx]=merge(tree[2*idx+1], tree[2*idx+2]);
        }

        
    
    public:
        SegmentTree(const vector<ll> &input){
            arr=input;
            n=arr.size();
            tree.resize(4*n);
            build(0, 0, n-1);
        }

        ll getAns(){
            return tree[0].ans;
        }

        void setValue(int pos, ll val){
            update(0, 0, n-1, pos, val);
        }
    
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    SegmentTree st(arr);
    cout<<st.getAns()<<endl;

    for(int j=0; j<m; j++){
        int i,v;
        cin>>i>>v;
        st.setValue(i, v);
        cout<<st.getAns()<<endl;
    }

    return 0;
}
