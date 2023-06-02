#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int32_t main(){
    IO;
    int t; cin >> t;
    vector<pii> v(t);
    for(auto&n:v){
        cin >> n.first >> n.second;
    }
    sort(v.begin(),v.end());
    ll ans = 0, step = 0;
    for(auto&n:v){
        step += n.first;
        ans += n.second - step;
    }
    cout << ans << endl; 
}