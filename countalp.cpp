#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<char> code; vector<pair<char, int>> count;
    string s; cin >> s;
    
    for (int i=0; i<26; i++) {
        count.push_back(make_pair(char(97+i), 0));
    }
    
    for (int i : s) {
        code.push_back(i);
        count[int(i)-97].second += 1;
    }
    
    for (int i = 0; i < count.size(); i++) {
        cout << count[i].first << " " << count[i].second << "\n";
    }
}
