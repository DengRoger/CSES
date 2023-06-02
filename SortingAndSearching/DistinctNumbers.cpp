#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;

int32_t main(){
    IO;
    int t ; cin >> t ; 
    set<int> s ; 
    while(t--){
        int x ; cin >> x ; 
        s.insert(x) ; 
    }
    cout << s.size() << endl ;
}