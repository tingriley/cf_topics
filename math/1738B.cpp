//1738 B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
// pigeon hole

void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll>a(n, 0);
    vector<ll>s(n, 0);
    for(int i = 0; i < k; i++){
        cin >> s[n-k+i];
    }
    if (k == 1) {
        cout << "YES" << endl;
        return;
    }

    for(int i = n-k+1; i < n; i++){
        a[i] = s[i]-s[i-1];
    }
    
    
    if (!std::is_sorted(a.begin() + n - k + 1, a.end())) {
 
        cout << "NO" << endl;
        
        return;
    }
    if (s[n - k] > a[n - k + 1] * (n - k + 1)) {
        cout << "NO" << endl;
        return;
    }
 

    
    cout << "Yes\n";

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
