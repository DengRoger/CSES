#include <bits/stdc++.h>
#pragma GCC optimize("O3","unroll-loops")
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll ; 

ll qpw(ll base, ll exponent) {
    ll result = 1;
    while (exponent != 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
}

int main(){
    IO;
    ll q;
    cin >> q;
    while(q--){
        ll k , sum = 9 , i = 1;
        cin >> k;
        while(k-sum > 0){
            k -= sum;
            sum = (9 * qpw(10, i)) *(i+1);
            i++;
        }
        k--;
        cout << to_string((k/i) + qpw(10, i-1))[k%i] << endl;
    }
}