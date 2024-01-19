#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, x; cin >> N; //taking the input of number of values
    long long A[N], lis[N]; // creating the array of values and the lis
    
    for (long long i = 0; i < N; i++) { //taking in input of values
        cin >> A[i];
        lis[i] = 1; // setting all values of lis to 1
    }
    
    for (long long j = 1; j < N; j++) { // starting j with the second number
		for (long long k = 0; k < j; k++) {
			if (A[k] < A[j] && lis[j] < lis[k]+1) {
				lis[j] = lis[k] + 1;
			}
		}
    }
    
    sort (lis, lis+N, greater<long long>());
    cout << lis[0];
}
