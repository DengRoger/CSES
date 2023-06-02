#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define pb push_back
#define pii pair<int, int>
#define IO cin.tie(0), ios::sync_with_stdio(0)
#define int long long
using namespace std;
int32_t main(){
	IO;
	int n, x, y;
	cin >> n;
	vector<pair<int, pii>> v;
	for (int i = 1; i <= n; i++){
		cin >> x >> y;
		v.pb({x, {-1, i}});
		v.pb({y, {1, i}});
	}
	sort(v.begin(), v.end());
	vector<int> rooms;
	int occupied = 0, max_rooms = 0, in_or_out, index;
	vector<int> ans(n+1);
	for (auto &element : v){
		in_or_out = element.second.first;
		index = element.second.second;
		if (in_or_out == 1) rooms.pb(ans[index]);
		else if (occupied == rooms.size()) ans[index] = ++max_rooms;
		else ans[index] = rooms[occupied++];
	}
	cout << max_rooms << endl;
	for (int i = 1; i <= n; i++) cout << ans[i] << " ";
}