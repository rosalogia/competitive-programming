#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll divisor(ll p, ll q) {
    if (p % q != 0) return p;

    vector<ll> divisors;

    ll tmp = LLONG_MIN;

    for (ll i = 1; i < sqrt(p); i++) {
        if (p % i == 0) {
            if (i == p/i) {
                divisors.push_back(i);
            } else {
                divisors.push_back(i);
                divisors.push_back(p / i);
            }
        }
    }

    for (ll i = divisors.size(); i > 0; i--)
        if (divisors[i] > tmp && divisors[i] % q != 0)
            tmp = divisors[i];

    return tmp;
}

int main() {
    ll t, p, q;

    cin >> t;

    while (t--) {
        cin >> p >> q;
        cout << divisor(p, q) << endl;
    }
}
