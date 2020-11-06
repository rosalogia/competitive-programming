#include <bits/stdc++.h>
#define N 100000
using namespace std;
typedef long long int ll;

int main() {
    ll t, n;
    ll a[5001];
    set<pair<int,int>> roads;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool s = false;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j != i && a[j] != a[i] && !roads.count(make_pair(i+1, j+1))) {
                    roads.insert(make_pair(i+1, j+1));
                    cout << i+1 << " " << j+1 << endl;
                    s = true;
                }
            }

            if (!s) {
                cout << "NO" << endl;
                break;
            } else {
                s = false;
            }
        }
    }
}
