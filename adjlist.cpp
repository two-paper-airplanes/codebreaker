#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> adjlist[10001]; //creating a list with maximum N
    int N, E, a, b; cin >> N >> E;
    for (int i = 0; i < E; i++) {
        cin >> a >> b;
        adjlist[a].push_back(b); //edge connecting a to b
        adjlist[b].push_back(a); //edge connecting b to a
    }
    
    for (int i = 0; i <= N; i++) {
        for (auto j: adjlist[i]) {
            cout << j << " ";
        }
        cout << "\n";
    }
}
