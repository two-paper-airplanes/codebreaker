#include <bits/stdc++.h>
using namespace std;

int n, k, a[100010];

bool isPossible(int x) {
    int squids = 1;
    int cur = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > x) return false;
        if (cur + a[i] <= x) {
            cur += a[i];
        } else {
            squids++;
            cur = a[i];
        }
    }
    if (squids > k) return false;
    return true;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i<n; i++) {
        cin >> a[i];
    }
    int h = 100000010, l = 0;
    while (h-l > 1) {
        int mid = (h+l)/2;
        if (isPossible(mid)) {
            h = mid;
        } else {l = mid;}
    }
    
    cout << h;
}
