//1592B
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll>a(n);
    vector<ll>b;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    b = a;
    sort(a.begin(), a.end());
    if(n >= 2*x){
        cout << "Yes\n";
        return;
    }
    else{
        for(int i = n-x; i < x; i++){
            if(a[i] != b[i]){
                cout << "No\n";
                return;
            }
        }
        cout << "Yes\n";
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
