#include <bits/stdc++.h>
using namespace std;

//commenting to debug

int main() {
    long long N, K, sum=0; cin>>N>>K; //taking in input
    long long A[1001];
    for (long long i = 0; i < N; ++i) {
        cin >> A[i]; //populating the vector
        if(i<K) sum += A[i]; //if i is less than window size (if K is 3, i=0,1,2) add to sum
    }
    
    long long max=sum;
    
	for(long long i=K; i<N; ++i){
		sum -= A[i-K];
		sum += A[i];
		if (sum>max) max=sum;
	}
	
	cout << max;

}
