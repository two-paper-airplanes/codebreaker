#include <bits/stdc++.h>
using namespace std;

int main() {
	int L, ss; cin>>L;
	bool v = true;
	stack<char> s;
	for (int i=0; i<L; i++) {
		char x; cin>>x;
		if (x == '(' || x == '[' || x == '{') {
			s.push(x);
		} else {
			ss = s.size();
			if (ss == 0) {
				v = false;
			} else if ((x == ')' && s.top() == '(') || (x == ']' && s.top() == '[') || (x == '}' && s.top() == '{')) {
				s.pop();
			} else {
				v = false;
			}
		}
	}
	ss = s.size();
	if (ss == 0 && v != false) {
		v = true;
	} else {
		v = false;
	}
	
	if (v == true) {
		cout<<"Valid";
	} else {
		cout<<"Invalid";
	}
}
