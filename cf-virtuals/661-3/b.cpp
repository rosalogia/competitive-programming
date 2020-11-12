#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool allCorrect(ll x[], ll n, ll m) {
//    cout << n << m << endl;
    for (int i = 0; i < n; i++) if (x[i] != m) return false;
    return true;
}

int main() {
    ll t, n;
    cin >> t;

    ll a[51], b[51];

    while (t--) {
        cin >> n;

        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n; i++) cin >> b[i];

        ll* aMin = min_element(a, a+n);
        ll* bMin = min_element(b, b+n);

        if (allCorrect(a, n, *aMin) && allCorrect(b, n, *bMin)) {
            cout << 0 << endl;
            continue;
        }

        ll moves = 0;

        while (!allCorrect(a, n, *aMin) && !allCorrect(b, n, *bMin)) {
            for (ll i = 0; i < n; i++) {
                // eat one candy and one orange
                cout << a[i] << " " << *aMin << endl;
                cout << b[i] << " " << *bMin << endl;
                if (a[i] > *aMin && b[i] > *bMin) {
                    a[i]--;
                    b[i]--;
                    moves++;
                } else if (a[i] > *aMin) {
                    a[i]--;
                    moves++;
                } else if (b[i] > *bMin) {
                    b[i]--;
                    moves++;
                }
            }
        }

        cout << moves << endl;
    }
}
