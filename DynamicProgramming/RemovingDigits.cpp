#include <bits/stdc++.h>
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;

int main(){
    IO;
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        dp[i] = 1e9;
        int x = i;
        while(x){
            dp[i] = min(dp[i], dp[i - x%10] + 1);
            x /= 10;
        }
    }
    cout << dp[n] << endl;
    return 0;
}