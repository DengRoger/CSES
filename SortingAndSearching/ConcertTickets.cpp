#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;

int32_t main(){
    IO;
    int n, m , x;
    cin >> n >> m;
    multiset<int> tickets;
    while(n--) cin >> x, tickets.insert(x);
    for(int i = 0; i < m; i++){
        cin >> x;
        auto it = tickets.upper_bound(x);
        if(it == tickets.begin()){
            cout << -1 << "\n";
        }
        else{
            it--;
            cout << *it << "\n";
            tickets.erase(it);
        }
    }
}
