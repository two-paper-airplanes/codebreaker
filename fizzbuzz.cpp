#include <iostream>
using namespace std;

int main() {
	int N, A, B;
	cin >> N >> A >> B;
	
	for (int i = 1; i <= N; i++) {
		if (i % A == 0 && i % B != 0) {
			cout << "Fizz" << "\n";
		} else if (i % B == 0 && i % A != 0) {
			cout << "Buzz" << "\n";
		} else if (i % A == 0 && i % B == 0) {
			cout << "FizzBuzz" << "\n";
		} else {
			cout << i << "\n";
		}
	}
}
