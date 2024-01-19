#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; string s; cin>>n>>s;
	if (n == 1) {
		cout<<"one";
	} else if (n == 9) {
		cout<<9;
	} else if (s == "hello") {
		cout<<"world";
	} else if (n == 3 && s == "world") {
		cout<<"andss";
	} else if (n == 20 || s == "hmm") {
		cout<<"sus";
	} else if (s.size() > 5) {
		cout<<"long";
	} else if (s.size() == n) {
		cout<<"equal";
	} else if (n % 2 == 0) {
		cout<<"222222222222222222222";
	} else cout<<"clown";
}
