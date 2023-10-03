#include <bits/stdc++.h>
#define IO cin.tie(0), ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;
#define endl '\n'

void LIS(vector<int> &arr){
    vector<int> lis;
    for(int i = 0; i < arr.size(); i++){
        auto it = lower_bound(lis.begin(), lis.end(), arr[i]);
        if(it == lis.end()) lis.push_back(arr[i]);
        else *it = arr[i];
    }
    cout << lis.size() << endl;
}

int main(){
    IO;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    LIS(arr);
}