#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t , x, y; cin >> t ; long long ans ; 
    while(t--){
        cin >> x >> y ; 
        ans = max(x,y) * max(x,y) - max(x,y) + 1 ; 
        if(x==y )cout << ans ; 
        else if (x<y && y%2==0) ans = ans - (y-x) , cout << ans ; 
        else if (x<y && y%2==1) ans = ans + (y-x) , cout << ans ; 
        else if (x>y && x%2==0) ans = ans + (x-y) , cout << ans ; 
        else if (x>y && x%2==1) ans = ans - (x-y) , cout << ans ; 
        cout << endl ; 
    }
}