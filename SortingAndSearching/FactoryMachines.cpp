#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int32_t main(){
    IO;
    int n, m; cin >> n >> m;
    vector<int> v(n);
    for(auto&x:v) cin >> x;
    ll l = 0, r = 1e18, ans = 1e18;
    while(l <= r){
        ll mid = (l+r)/2 ,tmp = 0;
        for(int i = 0; i < n; i++){
            tmp += mid/v[i];
            if(tmp >= m) break;
        }
        if(tmp >= m){
            ans = min(ans, mid);
            r = mid-1;
        }
        else l = mid+1;
    }
    cout << ans << endl;
}
