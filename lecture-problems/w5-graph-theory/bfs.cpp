#include <bits/stdc++.h>
#define N 100000
using namespace std;

vector<int> graph[N];

void bfs(int root) {
    // Output the root
    printf("%d\n", root);

    // The "fringe" is a vector containing references
    // to all the vertices on the next level to be traversed
    vector<int> fringe { root };
    // "seen" is a set containing vertices that have already been visited
    set<int> seen { root };

    // The fringe will be empty when we run out of
    // levels to traverse
    while (!fringe.empty()) {
        vector<int> next;
        // Loop through the current level
        for (int u : fringe)
            // For every value in the current adjacency list ...
            for (int v : graph[u])
                // If the value is not in the seen set ...
                if (!seen.count(v)) {
                    // Add it to the next-level vector
                    next.push_back(v);
                    // Insert it into the seen set
                    seen.insert(v);
                    // Display the value
                    printf("%d\n", v);
                }
        // Set the fringe to the vector containing all the vertices
        // on the next level
        fringe = next;
    }
}

int main() {
    int n, m, u, v;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bfs(1);
}
