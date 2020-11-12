#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, rollingSum = 0, taxiCount = 0;
    bool full = false;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 2)
            for (int j = 0; j < n; j++)
                if (s 

    for (int i = 0; i < n; i++) {
        if (rollingSum + s[i] > 4) {
            taxiCount++;
            rollingSum = s[i];
            full = false;
        } else if (rollingSum + s[i] == 4) {
            taxiCount++;
            rollingSum = 0;
            full = true;
        } else {
            rollingSum += s[i];
        }
    }

    cout << (full ? taxiCount : taxiCount + 1) << endl;

}
