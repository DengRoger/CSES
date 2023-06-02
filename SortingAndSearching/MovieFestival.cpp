#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
#define pb push_back
typedef long long ll;
typedef pair<int,int> pii;

int32_t main(){
    IO;
    int t, l, r, end = 0, ans = 0; cin >> t;
    vector<pii> v;
    while(cin >> l >> r) v.pb({r,l});
    sort(v.begin(),v.end());
    for(int i = 0; i < t; i++){
        if(v[i].second >= end){
            end = v[i].first;
            ans++;
        }
    }
    cout << ans << endl;
}