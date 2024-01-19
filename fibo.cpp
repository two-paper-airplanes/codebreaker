#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>arr;
	arr.push_back(0);
	arr.push_back(1);
	for (int x=2;x<=n;x++){
		arr.push_back((arr[x-1]+arr[x-2])%998244353);
	}
	for (int i=0;i<=n;i++){
		cout<<arr[i]<<"\n";
	}
	return 0;
}
