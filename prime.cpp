#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool x = true;
    
    if (n <= 1) {
        x = false;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            x = false;
            break;
        }
    }
    
    cout << (x ? "Prime" : "Not Prime");
}
