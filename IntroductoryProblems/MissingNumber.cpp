#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> q ; 
    int n , p ; 
    cin >> n ; 
    for(int i = 1 ; i <= n ; i++) q.insert(i) ; 
    n-=1;
    while(n--) cin >> p , q.erase(p) ; 
    for(auto&n:q) cout << n ; 
}