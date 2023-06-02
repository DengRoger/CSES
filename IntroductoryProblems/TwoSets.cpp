#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
#define eb emplace_back
#define endl '\n'
typedef long long ll ; 

int main(){
    IO;
    ll n , sum ;
    cin >> n;
    vector<ll> s1, s2;
    sum = (n * (n + 1)) / 2;
    if (!(sum % 2)){
        cout << "YES\n";
        ll mid = sum / 2;
        for (int i = n; i >= 1; i--){
            if (i <= mid){
                s1.eb(i);
                mid -= i;
            }
            else s2.eb(i);
        }
        cout << s1.size() << "\n";
        for (auto&i : s1) cout << i << " ";
        cout << endl;
        cout << s2.size() << endl;
        for (auto&i : s2) cout << i << " ";
    }
    else cout << "NO";
}