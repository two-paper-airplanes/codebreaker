#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, Q, x, l, r; cin >> N >> Q;
    vector<long long> A, SS, answers;
    A.push_back(0); SS.push_back(0);
    
    
    for (long long i = 1; i < N+1; i++) {
        cin >> x;
        A.push_back(x);
    }
    
    for (long long j = 1; j < N+1; j++) {
        SS.push_back(SS[j-1] + A[j]);
    }
    
    for (long long k = 0; k < Q; k++) {
        cin >> l >> r;
        answers.push_back(SS[r] - SS[l-1]);
    }
    
    for (long long m = 0; m < answers.size(); m++) {
        cout << answers[m] << "\n";
    }
}
