#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n;
    cin >> n;

    string s;
    cin >> s;

    char starting = s[0];

    ll changes = 0;

    for (ll i = 1; i < n; i++) {
        if (starting == 'R') {
            bool change = false;
            if (i % 3 == 1) {
                if (!(s[i] == 'G')) {
                    change = true;
                    s[i] = 'G';
                }
            } else if (i % 3 == 2) {
                if (!(s[i] == 'B')) {
                    change = true;
                    s[i] = 'B';
                }
            } else if (i % 3 == 0) {
                if (!(s[i] == 'R')) {
                    change = true;
                    s[i] = 'R';
                }
            }

            if (change) changes++;
        } else if (starting == 'G') {
            bool change = false;
            if (i % 3 == 1) {
                if (!(s[i] == 'B')) {
                    change = true;
                    s[i] = 'B';
                }
            } else if (i % 3 == 2) {
                if (!(s[i] == 'R')) {
                    change = true;
                    s[i] = 'R';
                }
            } else if (i % 3 == 0) {
                if (!(s[i] == 'G')) {
                    change = true;
                    s[i] = 'G';
                }
            }
            if (change) changes++;
        } else if (starting == 'B') {
            bool change = false;

            if (i % 3 == 1) {
                if (!(s[i] == 'R')) {
                    change = true;
                    s[i] = 'R';
                }
            } else if (i % 3 == 2) {
                if (!(s[i] == 'G')) {
                    change = true;
                    s[i] = 'G';
                }
            } else if (i % 3 == 0) {
                if (!(s[i] == 'B')) {
                    change = true;
                    s[i] = 'B';
                }
            }

            if (change) changes++;
        }
    }

    cout << changes << endl;
    cout << s << endl;
}
