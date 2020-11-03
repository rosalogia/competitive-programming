#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};

    for (char c : s) if (!vowels.count(tolower(c))) cout << "." << ((char) tolower(c));

    cout << "\n";
}
