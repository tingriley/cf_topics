//1694B
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n;
    string s;
    cin >> n >> s;
    ll ans = n;

    for(int i = 1; i < n; i++){
        if(s[i] != s[i-1])
            ans+=i; // number of strings with a suffix s[i]!=s[i-1]
    }
    cout << ans << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
