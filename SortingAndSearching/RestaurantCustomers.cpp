#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
#define pb push_back
typedef long long ll;
typedef pair<int,int> pii;


int32_t main(){
    IO;
    vector<pii> v ;
    int t, l, r, Max = 0, tmp=0; cin >> t ; 
    while(t--){
        cin >> l >> r ; 
        v.pb({l,1});
        v.pb({r,-1});
    }
    sort(v.begin(),v.end());
    for(auto&n:v){
        tmp+=n.second;
        if(tmp > Max)Max=tmp;
    }
    cout << Max << endl;
}