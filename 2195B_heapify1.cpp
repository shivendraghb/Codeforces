#include<bits/stdc++.h>
using namespace std;

#define int long long

int core(int x) {
    while(x % 2 == 0) x /= 2;
    return x;
}

void solve() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if(core(x) != core(i)) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}