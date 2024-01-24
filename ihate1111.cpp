#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t; cin>>t;
	bool possible=false;
	for (long long i=0; i<t; i++) {
		long long n; cin>>n;
		if (n%11 == 0) cout<<"YES\n";
		else if (n<111) cout<<"NO\n";
		else {
			for (long long j=111; j<=n; j+=111) {
				if ((n-j)%11 == 0) {
					cout<<"YES\n";
					possible=true;
					break;
				}
			}
		if (!possible) {
			cout<<"NO\n";
		}
		possible=false;
		}
	}
}
