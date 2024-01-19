#include <bits/stdc++.h>
using namespace std;
	
int findMin(int N, int A[]) {
	int x = A[0];
	for (int i = 0; i < N; i++) {
		if (A[i] < x) {
			x = A[i];
		}
	}
	
	return x;
}
