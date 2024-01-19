#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, m;
    cin >> N >> m;
    int ki[m];
		for (int i = 0; i < m; i++){
			cin >> ki[i];
	 	}
		sort(ki, ki + m);
    	int totalSchools = 0;
		int totalLunchBoxes = 0;
    	for (int j = 0; j < m; j++) {
        	if (totalLunchBoxes + ki[j] <= N) {
            	totalLunchBoxes += ki[j];
				totalSchools++;
        	}
    	}
    	cout << totalSchools;
    	return 0;
}
