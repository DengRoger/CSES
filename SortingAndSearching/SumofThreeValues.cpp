#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
#define int long long
using namespace std;
typedef pair<int,int> pii;

int ans = 0;
vector<pii> v;

int binarySearch(int l, int r, int target){
    l++ , r--;
    while(l<=r){
        int mid = (l+r)/2;
        if(v[mid].first == target){
            ans = 1;
            return v[mid].second;
        }
        else if(v[mid].first < target) l = mid+1;
        else r = mid-1;
    }
    return -1;
}

int32_t main(){
    IO;
    int n, t, l, r, m; cin >> n >> t;
    v.resize(n);
    for(int i = 0; i < n ; i++){
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(),v.end());

    for(l = 0; l < n; l++)
        for(r = l+1; r < n; r++){
            m = binarySearch( r, n, t - v[l].first - v[r].first);
            if(ans){
                cout << v[l].second << " " << m << " " << v[r].second << endl;
                return 0; 
            }
        }
    cout << "IMPOSSIBLE\n";
}
