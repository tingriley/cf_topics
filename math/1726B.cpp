//1726 B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
// pigeon hole

void solve() {
    ll n, m;
    cin >> n >> m;

    if(n > m){
        cout << "No\n";
        return;
    }

    if(n%2 == 1){
        cout << "Yes\n";
        for(int i = 0; i < n-1; i++){
            cout << 1 << " ";
        }
        cout << m-n+1 << endl;
    }

    else if(n%2 == 0 && m%2 == 0){
        cout << "Yes\n";
        for(int i = 0; i < n-2; i++){
            cout << 1 << " ";
        }
        cout << (m-n+2)/2 << " ";
        cout << (m-n+2)/2 << endl;
    }
    else{
        cout << "No\n";
        return;
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

//Lemma: In an interesting sequence 𝑎1,𝑎2,…,𝑎𝑛, every element other than the largest must have even occurrences.