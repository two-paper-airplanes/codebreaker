#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long N, D, M, sum=0;
	cin >> N >> D;
	vector<long long> potato;
	for (long long i = 0; i < N; ++i) {
		cin >> M;
		potato.push_back(M);
	}
	sort(potato.begin(), potato.end(), greater());
	
	for (long long i = 0; i < D; i++) {
	    sum += potato[i];
	}
	cout << sum;
}
