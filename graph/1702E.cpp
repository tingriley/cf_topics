// 1702E. Split Into Two Sets
#include <bits/stdc++.h>
using namespace std;

bool dfs(map<int, vector<int>>& g, vector<int>& color, int i, int c) {
    if (color[i])
        return color[i] == c;
    color[i] = c;
    for (auto& x : g[i]) {
        if (!dfs(g, color, x, -c))
            return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    map<int, vector<int>> g;
    vector<int> color(n + 1, 0);
    vector<int> deg(n + 1, 0);
    bool ok = true;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
        deg[x]++;
        deg[y]++;
        if (x == y || deg[x] > 2 || deg[y] > 2)
            ok = false;
    }
    if (!ok) {
        cout << "No\n";
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!color[i] && !dfs(g, color, i, 1)) {
            cout << "No\n";
            return;
        }
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
