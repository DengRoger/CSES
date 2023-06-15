#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
using namespace std;
#define IO cin.tie(0), ios::sync_with_stdio(0);
typedef long long ll;
 
const int N = 5e5 + 5;
ll v[N], seg[N<<2];
 
void StructSEG(int l , int r , int node){
    if(l==r) seg[node] = v[r] ; 
    else{
        int mid = (l+r) >> 1 ;
        StructSEG(l,mid,node<<1) ; 
        StructSEG(mid+1,r,node << 1 | 1) ;
        seg[node] = min(seg[node << 1] , seg[ node << 1 | 1]) ; 
    }
}
 
void updateNode(int idx , ll val , int l , int r , int node){
    if(l == r) seg[node] = val , v[idx] = val ;
    else{
        int m = (l + r) >> 1 ; 
        int leftNode  = (node << 1) ; 
        int rightNode = (node << 1) + 1 ; 
        if(idx <= m && idx >= l) updateNode(idx , val , l , m , leftNode ) ;
        else updateNode(idx , val , m+1,r , rightNode ) ; 
        seg[node] = min(seg[leftNode], seg[rightNode]) ; 
    } 
}
 
ll query(int tL , int tR , int nL , int nR , int node){
    if(tL > nR || tR < nL) return 0 ;
    int mid = (nL+nR)>>1 ;
    if(tL <= nL && nR <= tR) return seg[node] ;
    if(tR <= mid) return query(tL,tR,nL   ,mid,(node<<1));
    else if(tL > mid) return query(tL,tR,mid+1,nR ,(node<<1)+1);  
    return min(query(tL,tR,nL,mid,(node<<1)) , query(tL,tR,mid+1,nR,(node<<1)+1)) ; 
}
 
int main(){
    IO;
    int n, q, l, r, c; 
    cin >> n >> q;
    for(int i = 1 ; i <= n ; i++) cin >> v[i] ; 
    StructSEG(1,n,1) ;
    while(q--){
        cin >> c >> l >> r ; 
        if(c == 1) updateNode(l,r,1,n,1) ; 
        else cout << query(l,r,1,n,1) << '\n' ;   
    }
}
