#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
#define All(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define sort_unique(x) sort(All(x)); x.erase(unique(All(x)), x.end());
#define eb emplace_back 
#define pb push_back   
#define ne nth_element  
#define lb lower_bound  
#define ub upper_bound  
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;
typedef vector<ll>   vl;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define multiset tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
/**
order_of_key(k) : nums strictly smaller than k
find_by_order(k): index from 0
**/
const int N = 50+5;
const ll INF = 1e9;
const int mod = 1e9+2e5+7;
const ll MXP = 1e10;
const int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int main(){
    string q ,ans;char mid ; cin >> q ; 
    map<char,int> mp ; 
    int check = 1 ; 
    for(auto&n:q) mp[n]++;
    for(auto&n:mp)
        if(n.second%2!=0){
            check -- ; 
            mid = n.first ; 
        }
    if(check < 0) cout << "NO SOLUTION\n";
    else{
        for(auto&n:mp){
            if(n.first != mid) ans += string(n.second/2 , n.first) ; 
        }
        cout << ans ; 
        auto tmp = mp[mid] ; 
        cout << string(mp[mid] , mid) ; 
        reverse(ans.begin(),ans.end()) ; 
        cout << ans ; 
    }
}