#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

signed main() {
	int n; cin>>n;
	set<int> s;
	multiset<int> ms;
	vector<pii> v;
	
	for (int i=0; i<n; i++) {
		int x,y; cin>>x>>y;
		v.push_back({x,y});
	} 
	
	sort(v.begin(), v.end(), [](pii a, pii b) {
		return a.first < b.first;
	});
	
	int l=0,h=0,min=INT_MAX,cost=0, size = 0;
	while (h<v.size()-1) {
		if (size==3){
			cost=v[h].first-v[l].first;
			ms.erase(ms.find(v[l].second));
			s.insert(ms.begin(), ms.end());
			size = s.size();
			s.clear();
			l+=1;
			if (cost<min) {
				min = cost;
			}
		} else {
			h+=1;
			ms.insert(v[h].second);
			s.insert(ms.begin(), ms.end());
			size = s.size();
			s.clear();
		}
	}
	
	cout<<min;
}
