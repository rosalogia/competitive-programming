#include <bits/stdc++.h>
using namespace std;

vector<int> graph[N];

int main() {
    // n -> vertices
    // m -> edges
    // u, v -> represents an edge between two vertices u and v
    int n, m, u, v;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        // Form the adjacency lists
        // by appending v to u's list
        // and appending u to v's list
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
}
