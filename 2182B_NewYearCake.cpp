#include<bits/stdc++.h>
using namespace std;

#define int long long

inline void solve() {
    // int a, b;
    // cin >> a >> b;

    // auto calc = [&](int a, int b, bool white) {
    //     int s = 1, l = 0;
    //     bool w = white;

    //     while(true) {
    //         if(w) {
    //             if(a < s) break;
    //             a -= s;
    //         } else {
    //             if(b < s) break;
    //             b -= s;
    //         }

    //         l++;
    //         s *= 2;
    //         w = !w;
    //     }

    //     return l;
    // };

    // cout << max(calc(a, b, true), calc(a, b, false)) << '\n';

    long long a, b;
    cin >> a >> b;

    for(int n = 21; n >= 1; n--) {
        long long mask = (1LL << n) - 1;

        long long reqA = mask & 0x55555555LL;
        long long reqB = mask & 0xAAAAAAAALL;

        if((a >= reqA && b >= reqB) || (a >= reqB && b >= reqA)) {
            cout << n << '\n';
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
