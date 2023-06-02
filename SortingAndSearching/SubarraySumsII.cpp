#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
#define int long long

int32_t main(){
    IO;
    int n, t, c = 0, ans = 0; cin >> n >> t;
    vector<int> v(n);
    map<int,int> mp;
    mp[0] = 1;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        c += v[i];
        ans += mp[c - t]; 
        mp[c] ++;
    }
    cout << ans << endl ;
}