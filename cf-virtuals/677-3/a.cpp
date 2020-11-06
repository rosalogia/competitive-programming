#include <bits/stdc++.h>
using namespace std;

int sol(int n) {
    if (n == 1) return 1;
    else return n + sol(n - 1);
}

int main() {
    int t, x;
    cin >> t;

    while (t--) {
        cin >> x;
        string s = to_string(x);
        cout << 10 * (x % 10 - 1) + sol(s.length()) << endl;;
    }
}
