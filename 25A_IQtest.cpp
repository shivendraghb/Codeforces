#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int e = 0, o = 0;

    for(int i = 0; i < 3; i++) {
        if(v[i] % 2) o++;
        else e++;
    }

    bool isE = (e < o);

    for(int i = 0; i < n; i++) {
        if(isE && v[i] % 2 == 0) {
            cout << i + 1 << '\n';
            return;
        }

        if(!isE && v[i] % 2 == 1) {
            cout << i + 1 << '\n';
            return;
        }
    }
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