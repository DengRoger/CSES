#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;

int32_t main(){
    IO;
    int t ; cin >> t ; 
    vector<ll> v(t);
    for(auto&n:v)cin >> n;
    ll last = 0, ans = -1e9;
    for(auto&n:v){
        if(last+n > n)last+=n;
        else last = n;
        ans = max(ans,last);
    }
    cout << ans << endl;
}