#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;

int32_t main(){
    IO;
    ll n ; cin >> n ;
    vector<ll> v(n) ;
    for(auto&x:v) cin >> x ;
    sort(v.begin(),v.end());
    ll i=v[0] , j = 1 ;
    if(i>1){
        cout << 1 << endl ; 
        return 0 ;
    }
    for(;j<n;j++){
        if(v[j]>i+1) break;
        i+=v[j];
    }
    cout << (ll)(i+1) << endl ;
}