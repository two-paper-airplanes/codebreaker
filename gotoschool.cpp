#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin>>n;
  int a[n]; int b[n];
  for (int i=0; i<n; i++) {
    int x; cin>>x;
    a[i] = x;
  }
  
  for (int i=0; i<n; i++) {
    int y = a[i];
    b[y] = i+1;
  }

  for (int i=1; i<=n;i++) {
    cout<<b[i]<<" ";
  }
}
