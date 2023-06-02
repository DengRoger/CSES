#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
#define int long long

int32_t main(){
    int n, t, l, c = 0, ans = 0; cin >> n >> t;
    vector<int> v(n);
    map<int,int> mp;
    for(auto&n:v)cin>>n;
    l = 0;
    for(int i = 0 ; i < n ;i++){
        if(!mp[v[i]]) c ++;
        mp[v[i]] ++;
        while(c > t){
            mp[v[l]] -- ;
            if(!mp[v[l]]) c--;
            l++ ;
        }
        ans += i - l + 1;
    }
    cout << ans << endl ;
}