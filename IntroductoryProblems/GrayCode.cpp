#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n ; 
    vector<string> ans = {"0","1"} ;
    n-- ; 
    while(n--){
        auto tmp = ans ; 
        reverse(tmp.begin(),tmp.end());
        for(auto&n:ans) n = "0"+n ; 
        for(auto&n:tmp) ans.push_back("1"+n) ; 
    }
    for(auto&n:ans) cout << n << "\n" ; 
}