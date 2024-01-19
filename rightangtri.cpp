#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x;
	
	for (int i = 0; i <= n; ++i){
	    x = i;
		while (x != 0) {
			cout << "*";
			x -= 1;
		}
		cout << "\n";
	}
}
