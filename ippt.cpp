#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,sum; cin>>a>>b>>c;
	if (a == 0 || b == 0 || c == 0) {
		cout<<"FAIL";
	} else {
		sum = a+b+c;
		if (sum < 61) {
			cout<< "FAIL";
		} else if (sum >=61 && sum < 75) {
			cout<<"PASS";
		} else if (sum >= 75 && sum < 85) {
			cout<<"SILVER";
		} else {
			cout<<"GOLD";
		}
	}
}
