#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0),ios::sync_with_stdio(0)
typedef long long ll;
using namespace std;

const int N = 2e5;
#define Ls(x) x << 1
#define Rs(x) x << 1 | 1

vector<ll> segTree(4*N), lazy(4*N) , arr(N);

void build(int l, int r, int idx = 1){
    if(l == r){
        segTree[idx] = arr[l];
        return;
    }
    int mid = (l+r) >> 1;
    build(l, mid, Ls(idx));
    build(mid+1, r, Rs(idx));
    segTree[idx] = segTree[Ls(idx)]+ segTree[Rs(idx)];
}

void pushDown(int l, int r, int idx){
    if(lazy[idx] == 0) return;
    segTree[idx] += (r-l+1)*lazy[idx]; 
    if(l != r) lazy[Ls(idx)] += lazy[idx],lazy[Rs(idx)] += lazy[idx];
    lazy[idx] = 0; 
}

void update(int l, int r, int ql, int qr, ll val, int idx = 1){
    pushDown(l, r, idx); 
    if(l > qr || r < ql) return;
    if(l >= ql && r <= qr){
        segTree[idx] += (r-l+1)*val;
        if(l != r) lazy[Ls(idx)] += val, lazy[Rs(idx)] += val;
        return;
    }
    int mid = (l+r) >> 1;
    update(l, mid, ql, qr, val, Ls(idx)); 
    update(mid+1, r, ql, qr, val, Rs(idx));
    segTree[idx] = segTree[Ls(idx)]+ segTree[Rs(idx)];
}

ll query(int l, int r, int ql, int qr, int idx = 1){
    pushDown(l, r, idx);
    if(l > qr || r < ql) return 0; 
    if(l >= ql && r <= qr) return segTree[idx];
    ll mid = (l+r) >> 1, sum = 0; 
    if(ql <= mid) sum += query(l, mid, ql, qr, Ls(idx));
    if(qr > mid)  sum += query(mid+1, r, ql, qr, Rs(idx)); 
    return sum;
}

int main(){
    int n, t;
    cin >> n >> t;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    build(1,n,1);
    for(int i = 0; i < t; i++){
        int j, l, r, v;
        cin >> j;
        if(j == 1){
            cin >> l >> r >> v;
            update(1,n,l,r,v);
        }else{
            cin >> r;
            cout << query(1,n,r,r) << endl;
        }
    }
}

