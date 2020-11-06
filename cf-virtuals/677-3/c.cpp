#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll t, n;
    ll a[300001];
    cin >> t;

    while (t--) {
        cin >> n;
        
        for (ll i = 0; i < n; i++) cin >> a[i];

        ll mx = *max_element(a, a+n);

        // cout << mx << endl;

        ll dominant = -1;

        for (ll i = 0; i < n; i++) {
            if (a[i] == mx) {
                if (i > 0 && a[i - 1] < a[i]) dominant = i + 1;
                if (i < n - 1 && a[i + 1] < a[i]) dominant = i + 1;
            }
        }

        cout << dominant << endl;
    }
}
