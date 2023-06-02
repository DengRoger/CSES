#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
#define int long long

int32_t main(){
    IO;
    int t, sum = 0; cin >> t;
    vector<int> v(t);
    for(auto&n:v) cin >> n , sum += n;
    sort(v.begin(),v.end());
    cout << max(sum,v.back()*2) << endl;
}