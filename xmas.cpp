#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

int main() {
	long long guests, x;
	vector<pii> xmas;
	cin >> guests;
    
    for (long long i = 0; i < guests; i++) {
        cin >> x;
        xmas.push_back(make_pair(i+1, x));
    }
    
    sort(xmas.begin(), xmas.end(), [](pii a, pii b) {
		return a.second < b.second;
	});
    
    for (long long j = 0; j < xmas.size(); j++) {
        cout << xmas[j].first << " ";
    }
}
