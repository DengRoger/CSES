#pragma GCC optimize("O3","unroll-loops")
#include <bits/extc++.h>
#include <bits/stdc++.h>
#define IO cin.tie(0), ios::sync_with_stdio(0)
#define ll long long 
#define INF 0x3f3f3f3f
#define MAXN 100000
#define orderset tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;

int32_t main(){
    IO;
    int n, k;
    cin >> n >> k;
    orderset s;
    for(int i=1;i<=n;i++)s.insert(i);
    int pos = 0;
    while(s.size()){
        pos = (pos + k) % s.size();
        auto it = s.find_by_order(pos);
        cout << *it << " ";
        s.erase(it);
    }
}