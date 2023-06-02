#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
#define pb push_back
typedef long long ll;
typedef pair<int,int> pii;

int32_t main(){
    IO;
    int t, x, j; cin >> t;
    vector<pii> v;
    for(int i = 0; i < t; i++){
        cin >> x;
        while(v.size()>0  && x <= v.back().first)v.pop_back();
        if(v.size()>0)cout << v.back().second << " " ;
        else cout << 0 << " ";
        v.pb({x,i+1});
    }
}