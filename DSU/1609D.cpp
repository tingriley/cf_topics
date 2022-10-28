// 1609D. Social Network
#include <bits/stdc++.h>
using namespace std;
int mx = 0;
void make_set(vector<int>& parent, vector<int>& size, int x) {
    parent[x] = x;
    size[x] = 1;
}

int find_set(vector<int>& parent, int x) {
    if(parent[x] == x)return x;
    return (parent[x] = find_set(parent, parent[x]));
}

void union_sets(vector<int>& parent, vector<int>& size, int x, int y) {
    int a = find_set(parent, x);
    int b = find_set(parent, y);
    if(a!=b){
        if(size[a] < size[b]){
            swap(a, b);
        }
        parent[b] = a;
        size[a] += size[b];
        mx = max(mx, size[a]);
    }
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int>parent(n+1, 0);
    vector<int>size(n+1, 0);
    vector<pair<int, int>>q(k);
    mx = 0;
    for(int i = 1; i <= n; i++){
        make_set(parent, size, i);
    }
    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        q.push_back({x, y});
    }
    for(int i = 0; i < k; i++){
        int x = q[i].first;
        int y = q[i].second;
        if(find(parent))
    }
   
}

int main() {
    solve();
    return 0;
}
