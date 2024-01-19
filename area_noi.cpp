#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, w, area=0, max=0; cin>>n;
    for (int i=0; i<n; i++) {
        cin>>h>>w;
        area=h*w;
        if (max<area) {
            max=area;
        }
    }
    
    cout <<max;
}
