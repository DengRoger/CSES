#include <bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ; 
    long long n,ans = 0 , Max = 0 ; 
    while(t--){
        cin >> n ;
        if(n>Max)Max=n ;
        if(n<Max)ans+=Max-n ; 
    }
    cout << ans ; 
}