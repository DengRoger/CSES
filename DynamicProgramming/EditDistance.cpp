#include <bits/stdc++.h>
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;
#define endl '\n'
#define INF 1e9

ll edd(string& src, string& dst, ll ins, ll del, ll sst) {
    ll dp[src.size() + 1][dst.size() + 1];
    for (int i = 0; i <= src.size(); i++) {
        for (int j = 0; j <= dst.size(); j++) {
            if (i == 0) dp[i][j] = ins * j;
            else if (j == 0) dp[i][j] = del * i;
            else if (src[i - 1] == dst[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = min(dp[i][j - 1] + ins, min(dp[i - 1][j] + del, dp[i - 1][j - 1] + sst));
        }
    }
    return dp[src.size()][dst.size()];
}

int main(){
    IO;
    string s, t;
    cin >> s >> t;
    cout << edd(s, t, 1, 1, 1) << endl;
}