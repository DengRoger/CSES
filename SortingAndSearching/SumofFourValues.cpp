#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
#define int long long
#define pii pair<int,int>

int32_t main(){
    IO;
    int n, t; cin >> n >> t;
    vector<int> v(n);
    for(auto&n:v) cin >> n;
    map<int,pii> mp;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(mp.count(t-v[i]-v[j])){
                cout << mp[t-v[i]-v[j]].first+1 << " " << mp[t-v[i]-v[j]].second+1 << " " << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
        for(int j = 0; j < i; j++)
            mp[v[i]+v[j]] = {i,j};
    
    }
    cout << "IMPOSSIBLE" << endl;
}