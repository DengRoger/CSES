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
        seg[node] = seg[node << 1] + seg[ node << 1 | 1] ; 
    }
}
 
ll query(int tL , int tR , int nL , int nR , int node){
    if(tL > nR || tR < nL) return 0 ;
    ll mid = (nL+nR)>>1 , ans = 0;
    if(tL <= nL && nR <= tR) return seg[node] ;
    if(tL <= mid) ans += query(tL,tR,nL   ,mid,(node<<1));
    if(tR > mid) ans += query(tL,tR,mid+1,nR ,(node<<1)+1);  
    return ans ; 
}
 
int main(){
    IO;
    int n, q, l, r; 
    cin >> n >> q;
    for(int i = 1 ; i <= n ; i++) cin >> v[i] ; 
    StructSEG(1,n,1) ;
    while(q--){
        cin >> l >> r ; 
        cout << query(l,r,1,n,1) << '\n' ;   
    }
}
