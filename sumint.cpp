#include <iostream>
using namespace std;

int main() {
	int x;
	int y;
	cin >> x;
	int sum = 0;
	
	for (int i = 0; i <x;i++) {
		cin >> y;
		sum = sum + y;
	}
	
	cout << sum;
}
