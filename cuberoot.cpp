#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t, x;
	vector<long long> cubes;
	
	cin >> t;
		
	for (long long i = 0; i < t; i++) {
		cin >> x;
		cubes.push_back(x);
	}
	
	for (long long j = 0; j < cubes.size(); j++) {
		long long l = 0, h = 1000001;
		while (h-l > 1) {
		long long mid = (h+l)/2;
		long long test = mid * mid * mid;
		if (test <= cubes[j]) {
			l = mid;
		} else h = mid;
	}
		cout << l << "\n";
	}
}
