#include <bits/stdc++.h>
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;
#define endl '\n'
#define mod 1000000007

int main(){
    IO;
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> grid[i][j];
    }
    vector<vector<int>> dp(n, vector<int>(n));
    if(grid[0][0] == '.') dp[0][0] = 1;
    else dp[0][0] = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == '*') continue;
            if(i > 0) dp[i][j] += dp[i - 1][j];
            if(j > 0) dp[i][j] += dp[i][j - 1];
            dp[i][j] %= mod;
        }
    }
    cout << dp[n - 1][n - 1] << endl;
}