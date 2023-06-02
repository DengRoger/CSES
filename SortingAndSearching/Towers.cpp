#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
#define pb push_back
typedef long long ll;
typedef pair<int,int> pii;

int32_t main(){
    IO;
    int n, k;
	cin >> n;
	multiset<int> ans;
	for (int i = 0; i < n; ++i){
		cin >> k;
		auto it = ans.upper_bound(k);
		if (it == ans.end()) ans.insert(k);
		else {
			ans.erase(it);
			ans.insert(k);
		}
	}
	cout << ans.size();
}