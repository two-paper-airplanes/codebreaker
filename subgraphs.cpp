#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool> &visited) {
    visited[node] = true;
    for (auto i: adj[node]) {
        if (!visited[i]) {
            dfs(i, adj, visited);
        }
    }
}

int discSubG(int N, vector<pair <int, int>> edges) {
    vector<int> adj[N];
    for (auto edge: edges) {
        int a = edge.first;
        int b = edge.second;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    vector<bool> visited(N, false);
    int discsubgraphs = 0;
    
    for (int i = 0; i < N; ++i) {
        if (!visited[i]) {
            dfs(i, adj, visited);
            discsubgraphs += 1;
        }
    }
    return discsubgraphs;
}

int main() {
    int N, E; cin>>N>>E;
    vector <pair <int, int>> edges;
    
    for (int i = 0; i < E; i++) {
        int A, B; cin >> A >> B;
        edges.push_back(make_pair(A, B));
    }
    
    int subgraphs = discSubG(N, edges);
    cout << subgraphs;
}
