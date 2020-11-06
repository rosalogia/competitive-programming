#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll t, l, r;
    cin >> t;

    while (t--) {
        cin >> l >> r;
        ll s = l * 2 - 1;
        cout << (s > r ? "YES\n" : "NO\n");
    }
}
