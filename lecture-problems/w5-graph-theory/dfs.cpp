#include <bits/stdc++.h>
#define N 100000
using namespace std;

vector<int> graph[N];
// Keep track of vertices that we see
// while traversing the graph
set<int> seen;

void dfs(int root) {
    // Output the vertex value
    printf("%d\n", root);
    // Add it to the seen set
    // so that we don't run dfs
    // on it again
    seen.insert(root);

    // For each vertex in the adjacency list ...
    for (int i : graph[root])
        // If the vertex isn't in the seen set ...
        if (!seen.count(i))
            // Recursively run dfs on that vertex
            dfs(i);
}

int main() {
    int n, m, u, v;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(1);
}
