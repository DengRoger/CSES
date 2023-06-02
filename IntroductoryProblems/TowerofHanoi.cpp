#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll ; 

void sol(int src, int dest, int aux, int n){
    if(n == 1){
        cout << src << " " << dest << endl;
        return;
    }
    sol(src, aux, dest, n-1);
    cout << src << " " << dest << endl;
    sol(aux, dest, src, n-1);
}

int main(){
    IO;
    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl;
    sol(1, 3, 2, n);
}