#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, y;
    cin >> N;
    vector<long long> A(0);

    for (long long i = 0; i < N; i++) {
        cin >> y;
        A.push_back(y);
    }

    deque<long long> dq = {A[0]};

    for (long long j = 1; j < A.size(); j++) {
      while (dq.size() > 0 && A[j] >= dq[0]) {
        dq.pop_front();
      }
      dq.push_front(A[j]);
    }

    for (long long k = 0; k < dq.size(); k++) {
        cout << dq[k] << "\n";
    }
}
