#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin>>a>>b;
    vector<int> l;
    l.push_back(a);
    while (a > 1) {
        if (a%2) {
            a = 3*a+1;
            l.push_back(a);
        } else {
            a = a/2;
            l.push_back(a);
        }
    }
    
    if (l.size() < b) {
        cout << -1;
    } else cout << l[b-1];
}
