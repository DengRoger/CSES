#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;

int32_t main(){
    IO;
    int n, m, l, r; 
    cin >> n >> m;
    vector<int> v(n+1), u(n);
    for(int i=1;i<=n;i++){
        int x ; cin >> x ;
        u[i-1] = x ;
        v[x] = i ;
    }
    int ans = 1 ;
    for(int i=2;i<=n;i++){
        if(v[i]<v[i-1]) ans ++ ;
    }
}