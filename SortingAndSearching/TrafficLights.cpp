#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;

int32_t main(){
    IO;
    int l,t,n; cin >> l >> t;
    multiset<int> Length ;
    set<int> Lights;
    Length.insert(l);
    Lights.insert(0);
    Lights.insert(l);
    while(t--){
        cin >> n;
        auto l = Lights.upper_bound(n);
        auto r = l; l--;
        Length.erase(Length.find(*r-*l));
        Length.insert(n-*l);
        Length.insert(*r-n);
        Lights.insert(n);
        cout << *Length.rbegin() << " ";
    }
}