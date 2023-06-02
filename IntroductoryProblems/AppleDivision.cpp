#include <bits/stdc++.h>
using namespace std;
typedef long long ll ; 
ll sum = 0 , Min = 1e18; 
vector<int> v;
int t; 
void sol(ll n,int index){
    if(index != t){
        if(Min > abs(n - (sum - n))) Min = abs(n - (sum - n)); 
        sol(n,index+1);
        sol(n+v[index],index+1);
    }
}
int main(){
    int n ; 
    cin >> t; 
    for(int i = 0 ; i < t ; i++)cin >> n, v.emplace_back(n) , sum += n; 
    sol(0,0);
    cout << Min << endl ; 
}