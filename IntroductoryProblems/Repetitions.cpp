#include <bits/stdc++.h>
using namespace std;
int main(){
    string q  ; 
    int l = 0 , Max = 0 ; cin >> q ;q+="z";
    for(int r = 1 ; r < q.size() ; r++){
        if(q[r] != q[r-1]){
            if((r-l) > Max) Max = r-l ; 
            l = r ;             
        }
    }
    cout << Max ; 
}