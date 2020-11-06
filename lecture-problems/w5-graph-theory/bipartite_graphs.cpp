#include <bits/stdc++.h>
#define N 100000
using namespace std;

vector<int> graph[N];
set<int> seen;

int set1 = 0;
int set2 = 0;

void bipartite(int root, bool setSwitch) {
    seen.insert(root);

    if (setSwitch)
        set1++;
    else
        set2++;

    for (int i : graph[root])
        if (!seen.count(i))
            bipartite(i, !setSwitch);
}

int main() {
    int n, m, u, v;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
        if (!seen.count(i))
            bipartite(i, true);

    printf("%s\n", set1 + set2 == n ? "YES" : "NO");
}
