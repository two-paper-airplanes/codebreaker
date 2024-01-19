#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, x; cin>>N;
    vector<int> s;
    for (int i=0; i<N; i++) {
        cin>>x;
        s.push_back(x);
    }
    
    cout<<s[N/2];
}
