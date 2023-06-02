#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;

int32_t main(){
    int n, t, l, c = 0, ans = 0; cin >> n >> t;
    vector<int> v(n);
    for(auto&n:v)cin>>n;
    l = 0;
    for(int i = 0 ; i < n ;i++){
        c += v[i];
        while(c > t) c -= v[l] , l++;
        if(c==t) ans++;
    }
    cout << ans << endl ;
}