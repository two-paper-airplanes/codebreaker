#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, x; cin>>N;
    vector<int> lis;
    for (int i=0; i<N; i++) {
        cin>>x; lis.push_back(x);
    }
    
    int n = lis.size();
    vector<int> ans;
    
    ans.push_back(lis[0]);
    
    for (int i = 1; i < n; i++) {
		if (lis[i] > ans.back()) ans.push_back(lis[i]);
		else {
		    int low = lower_bound(ans.begin(), ans.end(), lis[i]) - ans.begin();
			ans[low] = lis[i];
		}
	}
	
	cout<<ans.size();
}
