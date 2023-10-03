#include <bits/stdc++.h>
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;
int main() {
    IO;
    int n, x;
    cin >> n >> x;
    vector<int> coins(n), dp(x+1,0);
    for(auto &n:coins) cin >> n;
    
    int mod = 1e9+7;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= x; i++){
            if(j == coins[i]) dp[j]++;
            if(j > coins[i]) dp[j] += dp[j - coins[i]];
            dp[j] %= mod;
        }
    }
    cout << dp[x] << endl;
}