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
    dp[0] = 1;
    for(int i = 1; i <= x; i++){
        for(auto&n : coins){
            if(i-n >= 0 && dp[i-n]) dp[i] = (dp[i]+dp[i-n])%mod;
        }
        cout << dp[i] << " ";
    }
    //cout << dp[x]<<endl;
}