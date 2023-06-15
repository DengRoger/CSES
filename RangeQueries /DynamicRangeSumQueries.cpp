#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
using namespace std;
#define IO cin.tie(0), ios::sync_with_stdio(0);
typedef long long ll;
const int N = 2e5 + 5;
 
ll v[N] , seg[N<<2] ; 
 
void StructSEG(int l , int r , ll node){
    if(l==r) seg[node] = v[r] ; 
    else{
        int mid = (l+r) >> 1 , tmp = node << 1;
        StructSEG(l,mid,tmp) ; 
        StructSEG(mid+1,r,tmp+1) ;
        seg[node] = seg[tmp] + seg[tmp+1] ; 
    }
}
ll query(int tL , int tR , int nL , int nR , int node){
    ll mid = (nL+nR)>>1 , ans = 0 ; 
    if(tL <= nL && nR <= tR) return seg[node] ;
    if(tL <= mid) ans += query(tL,tR,nL   ,mid,(node<<1)  );
    if(tR  > mid) ans += query(tL,tR,mid+1,nR ,(node<<1)+1);  
    return ans ; 
}
void updateNode(int idx , int val , int l , int r , int node){
    if(l == r) seg[node] = val , v[idx] = val ;
    else{
        int m = (l + r) >> 1 ; 
        int leftNode  = (node << 1) ; 
        int rightNode = (node << 1) + 1 ; 
        if(idx <= m && idx >= l) updateNode(idx , val , l , m , leftNode ) ;
        else updateNode(idx , val , m+1,r , rightNode ) ; 
        seg[node] = seg[leftNode] + seg[rightNode] ; 
    } 
}
 
int main(){
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