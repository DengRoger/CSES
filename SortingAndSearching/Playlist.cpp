#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
#define pb push_back
typedef long long ll;
typedef pair<int,int> pii;

int32_t main(){
    int t; cin >> t;
    vector<int> v(t);
    for(auto&n:v)cin >> n;
    map<int,int> mp;
    int l = 0, ans = 0;
    for(int r = 0; r < t; r++){
        mp[v[r]]++;
        while(mp[v[r]] > 1){
            mp[v[l]]--;
            l++;
        }
        ans = max(ans, r-l+1);
    }
    cout << ans << endl;
}