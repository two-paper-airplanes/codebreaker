#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin>>n>>k;
    int arr[n], dp[n];
    for (int i=0; i<n; i++) cin>>arr[i];
    dp[0]=0;
    for (int i=1; i<n; i++) {
        int temp = INT_MAX;
        for (int j=i-k; j<i; j++) {
            if (j>=0) {
                temp = min(temp, dp[j] + abs(arr[i]-arr[j]));
            }
        }
        dp[i] = temp;
    }
    cout<<dp[n-1];
}
