#include <bits/stdc++.h>
using namespace std;

int a[51][51]; // creating empty matrix of 51 each (cuz n < 50)
int main() {
    int n, e; cin >> n >> e;
    for (int i = 0; i < e; i++) {
        int c, b; cin >> c >> b; 
        a[c][b] = 1; // cuz theres an edge from c to b
        a[b][c] =1; //cuz theres an edge from b to c
    }
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) { //
            cout << a[i][j];
        }
        cout << "\n";
    }
}
