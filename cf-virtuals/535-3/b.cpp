#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n;
    cin >> n;
    vector<ll> d;
    vector<ll> duplicates;
    ll last;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (count(d.begin(), d.end(), x) > 0)
            duplicates.push_back(x);
        else
            d.push_back(x);
    }

    sort(d.begin(), d.end());

    ll target = *max_element(duplicates.begin(), duplicates.end());

    ll a = d.back(), b;

    for (int i = d.size() - 1; i >= 0; i--) {
        if (__gcd(a, d[i]) == target) {
            b = d[i];
            break;
        }
    }

    cout << a << " " << b << endl;

}
