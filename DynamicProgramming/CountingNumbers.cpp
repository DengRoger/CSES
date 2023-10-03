#include <bits/stdc++.h>
#define IO cin.tie(0), ios::sync_with_stdio(0)
#define All(x) x.begin(), x.end()
#define sort_unique(x) sort(All(x)); x.erase(unique(All(x)), x.end());
#define ne nth_element
#define INF 1e9
typedef long long ll;
using namespace std;
// #include <bits/extc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define multiset tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
// order_of_key(k) : nums strictly smaller than k
// find_by_order(k): index from 0
/*
| Tag                  | push  | pop    | join | modify |
| paring_heap_tag      | O(1)  | O(lgN) | O(1) | O(lgN) |
| thin_heap_tag        | O(lgN)| O(lgN) |  慢  |   慢    |
| binomial_heap_tag    | O(1)  | O(lgN) | O(1) | O(lgN) |
| rc_binomial_heap_tag | O(1)  | O(lgN) | O(1) | O(lgN) |
| binary_heap_tag      | O(1)  | O(lgN) |  慢  | O(lgN) | 
*/
// typedef __gnu_pbds::priority_queue<pair<int,ii>,less<pair<int,ii>>,rc_binomial_heap_tag> heap;

int main(){
    int n, x, mod = 1e9+7;
    cin >> n >> x;
    vector<ll> coins(n);
    for(auto&n:coins) cin >> n;
    vector<ll> dp(x+1, 0);
    for(int i = 0; i < x; i++){
        
    }
}