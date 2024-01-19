#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, x, sum, product, y, b, c;
	sum = 0;
	product = 0;
	b = 0;
    vector<long long> A;
    cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> x;
		A.push_back(x);
	}
	
	for (int j = 0; j < A.size(); j++) {
		sum = sum + A[j] % 1000000007;
	}
	
	y = A.size()-1;
	product = (A[0] % 1000000007) * (A[y] % 1000000007);
	
	for (int k = 1; k < A.size(); k++) {
		b = b + A[k] % 1000000007;
	}
	c = (A[0] - b) % 1000000007;
	
	cout << sum % 1000000007 << " " << product % 1000000007 << " " << c;
	
	
}
