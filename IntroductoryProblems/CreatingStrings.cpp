#include <bits/stdc++.h>
using namespace std; 
string ans ; 
int c = 0 ; 
map<string,int> mp ; 
void G(string s , multiset<char> m){
    if (m.empty()){
        if(mp[s]==0) mp[s]++ , c++ , ans += s , ans += "\n" ;
    }
    else{
        for(auto&n:m){
            string ss = s + n ; 
            multiset<char> m1 ; 
            m1 = m ,m1.erase(m1.lower_bound(n)); 
            G(ss,m1) ; 
        }
    } 
    return ; 
}

int main(){
    multiset<char> q ; 
    char n ; 
    while(cin>>n)q.insert(n) ; 
    G("",q) ; 
    cout << c << endl << ans  ; 
}