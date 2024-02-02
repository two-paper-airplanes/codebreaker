#include <bits/stdc++.h>
using namespace std;
#define int long long
#define psi pair<string, int>

signed main() {
    vector<psi> commands;
    string p; int q, r; cin>>q;

    //creating vector of commands
    for (int i=0; i<q; i++) {
        cin>>p;
        if (p == "PUSH" || p == "IFZERO") {
            cin>>q;
            commands.push_back({p,q});
        } else commands.push_back({p, 0});
    }

    stack<int> s;
    stack<int> reg;
    int temp;

    //reading each command
    for (int i=0; i<q; i++) {
        if (commands[i].first == "PUSH") {
            s.push(commands[i].second);
        } else if (commands[i].first == "STORE") {
            reg.push(s.top());
            s.pop();
        } else if (commands[i].first == "LOAD") {
            for (int j = 0; j<reg.size(); j++) {
                s.push(reg[j]);
            }
        } else if (commands[i].first == "PLUS") {
            temp = s[0] + s[1];
            s.pop(); s.pop();
            s.push(temp);
        } else if (commands[i].first == "TIMES") {
            temp = s[0] * s[1];
            s.pop(); s.pop();
            s.push(temp);
        } else if (commands[i].first == "IFZERO") {
            if (s.top() == 0) {
                i = commands[i].second - 1;
            }
        } else {
            cout<<s.top();
            break;
        }
    }

}