#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ; 
    long long ans = 2 ; 
    for(int i = 1 ; i < n ;i++) ans = (ans*=2)%1000000007;
    cout << ans ;
}
