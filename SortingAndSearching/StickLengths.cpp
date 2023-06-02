#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;

int32_t main(){
    IO;
    int t, n, mid;
    ll sum = 0;
    cin >> t;
    vector<int> v(t);
    for(auto&n:v) cin >> n;
    sort(v.begin(),v.end()); 
    mid = v[t/2];
    for(auto&n:v) sum+=abs(n-mid);
    cout << sum << endl;
}