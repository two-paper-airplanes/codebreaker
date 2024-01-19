#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>;

int main() {
    long long N, x; cin>>N;
    deque<long long> A;
    vector<long long> v; //dont judge! >:(
    
    for (long long i; i<N; i++) {
        cin >> x;
        if (i%2) {
            A.push_back(x);
        } else A.push_front(x);
    }
    
    if (N%2 == 0) {
        for (long long i; i < N; i++) {
            v.push_back(A[i]);
        }
        reverse(v.begin(), v.end());
        for (long long i; i < N; i++) {
            A[i] = v[i];
        }
    } //if you're stalking, please get a life
    //i just wanna pass this idc how stupid this is
    
    for (long long i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
}
