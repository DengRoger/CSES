#include <bits/stdc++.h>
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;

int BackPackProblem(vector<int> weight, vector<int> price, int x){
    vector<vector<int>> dp(weight.size() + 1, vector<int>(x + 1));
    for(int i = 0; i <= weight.size(); i++){
        for(int j = 0; j <= x; j++){
            if(i == 0 || j == 0) dp[i][j] = 0;
            else if(weight[i - 1] <= j)
                dp[i][j] = max(dp[i - 1][j], price[i - 1] + dp[i - 1][j - weight[i - 1]]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[weight.size()][x];
}

int main(){
    IO;
    int n, x;
    cin >> n >> x;
    vector<int> weight(n), price(n);
    for(int i = 0; i < n; i++) cin >> weight[i];
    for(int i = 0; i < n; i++) cin >> price[i];
    cout << BackPackProblem(weight, price, x) << endl;

}