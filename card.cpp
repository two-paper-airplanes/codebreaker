#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, k;
	cin >> m >> k;
	string s;
	cin >> s;
	deque<int> v;
	for (int i=0; i< m; ++i){
		v.push_back(i);
	}
	for (int i=0; i<s.size(); ++i){
		if (s[i] == 'A'){
			v.push_back(v.front());
			v.pop_front();
		}
		else if (s[i] == 'B'){
			int a=v.front();
			v.pop_front();
			v.push_back(v.front());
			v.pop_front();
			v.push_front(a);
		}
		else break;
	}
	cout << v[k-1] << " " << v[k] << " " << v[k+1];
}
