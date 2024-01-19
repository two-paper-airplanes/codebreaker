//wrong code
//saving for progress
#include <bits/stdc++.h>
using namespace std;

int main() { //rubberducking time?!
	int n,c; cin>>n>>c; //getting input
	bool arr[n]; //creating an array for booleans with n size (to represent the building)
	vector<int> ans; //creating a vector for the answers
	for (int i=1; i<=c; i++) { //1-indexing, for every cat that enters...
		int x; cin>>x; //input initial floor number
		if (i == 1) { //if first term
			ans.push_back(x); //immediately assign desired floor number to cat
			arr[x-1] = true; //set floor as taken
		} else { //for subsequent terms
			while (arr[x-1] == true && x>1) { //while the desired floor is taken and is higher than 1 (minmum 2)
				x-=1; //decrement (minimum 1) basically this happens when we're at lvl 2 and its still occupied
			}
			if (arr[x-1] == true) { //after reaching x=1, check if lvl1 is occupied
				x = n; //if yes, assign desired floor to top floor
				while (arr[x-1] == true) { //check if top floor is occupied 
					x-=1; //keep decrementing until not occupied
				}
				ans.push_back(x); //when not occupied, the floor is assigned to cat
				arr[x-1] = true;
			} else {
				ans.push_back(x); //if not occupied, lvl 1 is assigned to cat
				arr[x-1] = true;
			}
		}
	}
	
	for (int i=0; i<c; i++) {
		cout<<ans[i]<<"\n"; //output assigned floors
	}
}
