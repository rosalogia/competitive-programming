#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll q, l1, r1, l2, r2;
    cin >> q;

    while (q--) {
        cin >> l1 >> r1 >> l2 >> r2;
        if (l1 != r2) cout << l1 << " " << r2 << endl;
        else cout << l1 << " " << r2 - 1 << endl;
    }
}
