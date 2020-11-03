#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, z, a = 0, b = 0, c = 0;

    cin >> n;

    while (n--) {
        cin >> x >> y >> z;
        a += x;
        b += y;
        z += z;
    }

    cout << ((!a && !b && !c) ? "YES\n" : "NO\n");

    
    /* int v[n][3]; */

    /* for (int i = 0; i < n; i++) */
    /*     for (int j = 0; j < 3; j++) */
    /*         cin >> v[i][j]; */

    /* int sum = 0; */

    /* for (int i = 0; i < 3; i++) { */
    /*     for (int j = 0; j < n; j++) */
    /*         sum += v[j][i]; */
        
    /*     if (sum != 0) { */
    /*         cout << "NO\n"; */
    /*         return 0; */
    /*     } */
    /* } */

    /* cout << "YES\n"; */
}
