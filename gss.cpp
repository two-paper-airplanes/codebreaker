#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    long long sum = 0;
    cin >> n;
    vector<long long> vec;
    
    for (long long i = 0; i < n; i++) {
        cin >> x;
        vec.push_back(x);
    }
    
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    
    for (long long j = 0; j < n; j++) {
        if ((j+1) % 4 != 0) {
            sum = sum + vec[j];
        }
    }
    
    cout << sum;
}
