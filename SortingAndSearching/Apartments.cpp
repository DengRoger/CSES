#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;

int32_t main(){
    IO;
    int n , m , k ; cin >> n >> m >> k ; 
    vector<int> a(n) , b(m) ; 
    for(int i = 0 ; i < n ; i++) cin >> a[i] ; 
    for(int i = 0 ; i < m ; i++) cin >> b[i] ; 
    sort(a.begin() , a.end()) ; 
    sort(b.begin() , b.end()) ; 
    int i = 0 , j = 0 , ans = 0 ; 
    while(i < n && j < m){
        if(abs(a[i] - b[j]) <= k){
            ans++ ; 
            i++ ; 
            j++ ; 
        }
        else if(a[i] < b[j]) i++ ; 
        else j++ ; 
    }
    cout << ans << endl ;
}