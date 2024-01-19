#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, y;
  cin >> N;
  deque<char> BASES;
  string command;
  char x;
  vector<char> QUERY;

  for (long long i = 0; i < N; i++) {
    cin >> command;

    if (command == "ADD_BACK") {
      cin >> x;
      BASES.push_back(x);
    } else if (command == "ADD_FRONT") {
      cin >> x;
      BASES.push_front(x);
    } else if (command == "SNIP_BACK") {
      cin >> y;
      while (BASES.size() > y+1) {
        BASES.pop_back();
      }
    } else if (command == "SNIP_FRONT") {
      cin >> y;
      for (long long j = 0; j <= y; j++) {
        BASES.pop_front();
      }
    } else {
      cin >> y;
      QUERY.push_back(BASES[y]);
    }

    
  }

  for (long long k = 0; k < QUERY.size(); k++) {
    cout << QUERY[k] << "\n";
  }
  
}
