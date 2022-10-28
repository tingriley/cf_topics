//1708B
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll>ans;
    bool ok = true;

    for(int i = 1; i <= n; i++){
        ll x = (l/i) + (l%i!=0);
        if(x * i <= r){
            ans.push_back(x*i);
        }
        else{
            ok = false;
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    for(auto &x: ans){
        cout << x << " ";
    }
    cout << "\n";

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
