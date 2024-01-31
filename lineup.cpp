#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>

int main() {
	int n; cin>>n;
	vector<pii> v;
	set<int> s;
	//make a vector of pairs containing the distance of each ot the cows and their types
	for (int i=0; i<n; i++) {
		int x, y; cin>>x>>y;
		v.push_back({x, y});
	}
	//sort them in ascending order
	sort(v.begin(), v.end(), [](pii a, pii b) {
		return a.first < b.first;
	});
	//make the array B[] of n integers and set all integers to 9e18
	int B[n];
	for (int i=0; i<n; i++) B[i] = 9e18;
	//set the lower and upper limits at 0
	int l=0, h=0;
	//actual algorithm!
	while (h<n) {
		for (int i=l; i<h; i++) {
			s.insert(v[i].second);
		}
		if (s.size() == 3) {
			int dist = v[h].first-v[l].first;
			//check if dist is smaller than b[h]
			//if so, change b[h] to dist
			if (dist<B[h]) B[h] = dist;
			//increase l pointer
			l++;
		} else {
			//increase h pointer
			h++
		}
	}

	//finally sort the B[] array and output B[0]
	sort(B, B+n);
	cout<<B[0];

}

/*
---------------------------------------PSEUDOCODE---------------------------------------
✅ um so basically i want to make a vector of pairs containing the distance of each ot the cows and their types
✅ and sort them in ascending order
✅ then make the array B[] of n integers and set all integers to 9e18
✅ after that i should set the lower and upper limits at 0
add the types to a set
and check for the size of the set
if the set size is 3, i should change b[h] to the distance which should be v[h].first-v[l].first, then i should move the l pointer up and repeat
if the set size is not 3, i should move the h pointer up and repeat
✅ this shld go on while h is less than n (um problem!!! what if the lowest distance includes the last integer)
oh and if the h is fixed and l is moved up and the set size is still 3 then you shld check if the new b[h] is smaller and only change it if its smaller
finally sort the B[] array
and output B[0];
*/