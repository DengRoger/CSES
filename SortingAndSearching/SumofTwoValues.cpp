#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
#define pb push_back
typedef long long ll;
typedef pair<int,int> pii;

int32_t main(){
    IO;
    int n , t , m; cin >> n >> t ;
    vector<pii> v ;
    for(int i = 0 ; i < n ; i++){
        cin >> m;
        v.pb({m,i+1});
    }
    sort(v.begin(),v.end());
    int l = 0 , r = n-1 ;
    while(l<r){
        if(v[l].first+v[r].first == t){
            cout << v[l].second << " " << v[r].second << endl ;
            return 0 ;
        }   
        else if(v[l].first+v[r].first < t) l++ ;
        else r-- ;
    }
    cout << "IMPOSSIBLE" << endl ;
}