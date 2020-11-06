#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    int a[51];
    cin >> t;

    while (t--) {
        cin >> n;
        int moves = 0;
        int start = -1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (start == -1 && a[i] == 1) start = i;
        }
        vector<int> distances;
        int p1 = -1, p2 = -1, p3 = -1;
        for (int i = start; i < n - 1; i++) {
            if (a[i] == 1 && a[i + 1] == 0) p1 = i;
            else if (a[i] == 0 && a[i + 1] == 1) p2 = i;

            if (p2 > p1) {
                distances.push_back(p2 - p1);
                p2 = -1;
                p1 = -1;
            }
        }

        int sum = 0;
        for (int i : distances) {
            sum += i;
        }

        cout << sum << endl;

    }
}
