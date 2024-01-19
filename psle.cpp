#include <iostream>
using namespace std;

int main() {
	int score;
	cin >> score;
	if (score >= 91) {
		cout << "A*";
	} else if (score < 91 && score >= 75) {
		cout << "A";
	} else if (score < 75 && score >= 60) {
		cout << "B";
	} else if (score < 60 && score >= 50) {
		cout << "C";
	} else if (score < 50 && score >= 35) {
		cout << "D";
	} else if (score < 35 && score >= 20) {
		cout << "E";
	} else {
		cout << "U";
	}
}
