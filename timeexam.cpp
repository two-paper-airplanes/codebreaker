#include <bits/stdc++.h>
using namespace std;

int main() {
	long long N;
	cin >> N;
	
	int h = (N / 60) % 24;
	int m = N % 60;
	
	if (h == 0) {
		if (m == 0) {
			cout << "0000";
		} else if (m > 0 && m < 10) {
			cout << "000" << m;
		} else {
			cout << "00" << m;
		}
	} else if (h > 0 && h < 10) {
		if (m == 0) {
			cout << "0" << h << "00";
		} else if (m > 0 && m < 10) {
			cout << "0" << h << "0" << m;
		} else {
			cout << "0" << h << m;
		}
	} else {
		if (m == 0) {
			cout << h << "00";
		} else if (m > 0 && m < 10) {
			cout << h << "0" << m;
		} else {
			cout << h << m;
		}
	}
}
