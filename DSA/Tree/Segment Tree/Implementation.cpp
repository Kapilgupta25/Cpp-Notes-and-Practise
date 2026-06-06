#include<bits/stdc++.h>
using namespace std;

vector<int> tree;
vector<int> arr;
void buildTree(int idx, int l, int r){
    // base case leaf node -> l==r
    if(l==r){
        tree[idx]=arr[l];
        return ;
    }

    // if it is not a leaf then it has two children 
    int mid=l+(r-l)/2;
    buildTree(2*idx+1, l, mid);
    buildTree(2*idx+2, mid+1, r);

    // update the node value after building children
    tree[idx]=tree[2*idx+1]+tree[2*idx+2];

}

// idx, l ,r -> same as the build tree function
// ql, qr -> define the query range
int query(int idx, int l, int r, int ql, int qr){
    // case 1: No overlap  -> return 0 for sum
    if(r<ql || l>qr){
        return 0;
    }
    // case 2: Perfect match  -> return node's value
    else if(ql<=l && r<=qr){
        return tree[idx];
    }
    // case 3 : Partially match -> look for both of its children and combine the result
    int mid=l+(r-l)/2;
    int left=query(2*idx+1, l, mid, ql, qr);
    int right=query(2*idx+2, mid+1, r, ql, qr);
    return left+right;

}

// update function 
void update(int idx, int l, int r, int pos, int val){
    // base case -> found the leaf node that is to be updated
    if(l==r){
        arr[idx]=val;
        tree[idx]=val;
        return ;
    }

    // decide which child the pos belong to
    int mid=l+(r-l)/2;
    if(pos<=mid){
        update(2*idx+1, l, mid, pos, val);
    }
    else{
        update(2*idx+1, mid+1, r, pos, val);
    }

    // after updating the child update the current node value
    tree[idx]=tree[2*idx+1]+tree[2*idx+2];

}

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    buildTree(0, 0, n-1);

    int ql,qr;
    cin>> ql>>qr;
    query(0, 0, n-1, ql, qr);

    int pos, val;
    cin>>pos >> val;
    update(0, 0, n-1, pos, val);
}