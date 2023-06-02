#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;

int32_t main(){
    IO;
    int t , w , l , r , ans = 0 ; cin >> t >> w ; 
    vector<int> v(t) ; 
    for(auto&n:v) cin >> n ;  
    sort(v.begin(),v.end());
    l = 0 , r = t-1 ; 
    while(l<=r){
        if(v[l]+v[r] <= w) ans ++ , l++ , r-- ; 
        else ans ++ , r-- ; 
    }
    cout << ans << endl ;
}