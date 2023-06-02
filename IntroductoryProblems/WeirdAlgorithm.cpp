#include <bits/stdc++.h>
using namespace std;
int main(){
    long long q ; cin >> q; 
    while(q!=1){
        cout << q << " " ; 
        if(q%2==0) q>>=1 ; 
        else q = q*3+1 ; 
    }
    cout << 1  ;
}