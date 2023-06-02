#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
#define int long long

int32_t main(){
    int n, c, ans = 0;
    cin >> n >> c;
    vector<int> v(n);
    for(auto& n: v){
        cin>>n;
        ans = max(ans,n);
    }

}