#include <bits/stdc++.h>
using namespace std;
int main(){
    int t ,a,b; cin >> t ;
    while (t--){
        cin >> a >> b ; 
        if((a+b)%3 != 0) cout << "NO\n";
        else if(max(a,b)/2 > min(a,b)) cout << "NO\n";
        else cout << "YES\n" ;  
    }
}