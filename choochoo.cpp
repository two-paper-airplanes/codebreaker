#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count=0; cin >> n;
    string x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == "chugga") {
            count += 1;
        }
    }
    
    if (count % 2) {
        cout << "choo CHOO";
    } else {
        cout << "CHOO choo";
    }
    
}
