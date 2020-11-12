#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    int a[51];

    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a+n);

        int i = 0, j = 1;

        bool works = true;

        while (i < n && j < n) {
            if (abs(a[i] - a[j]) > 1) {
                works = false;
                break;
            }

            i++;
            j++;
        }

        cout << (works ? "YES" : "NO") << endl;
    }
}
