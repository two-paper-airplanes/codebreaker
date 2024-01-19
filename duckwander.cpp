#include <bits/stdc++.h>
using namespace std;

int main() {
	pair<long long, long long> coordinates = {0, 0};
	long long N, K;
	string i;
	
	cin >> N;
	for (int j = 0; j < N; j++) {
		cin >> i >> K;
		if (i == "UP") {
			coordinates.second += K;
		} else if (i == "DOWN") {
			coordinates.second -= K;
		} else if (i == "RIGHT") {
			coordinates.first += K;
		} else if (i == "LEFT") {
			coordinates.first -= K;
		}
	}
	
	cout << coordinates.first << " " << coordinates.second;
}
