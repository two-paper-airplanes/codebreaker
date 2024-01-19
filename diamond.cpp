#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x=1; cin>>n;
	while(n-1>=1){
		for(int i=0;i<n-1;i++) cout<<" ";
		for(int i=0;i<x;i++) cout<<"*";
		for(int i=0;i<n-1;i++) cout<<" ";
		cout<<"\n";
		n-=1; x+=2;
	}
	for(int i=0;i<n-1;i++) cout<<" ";
	for(int i=0;i<x;i++) cout<<"*";
	for(int i=0;i<n-1;i++) cout<<" ";
	cout<<"\n";
	n+=1; x-=2;
	while(x>=1){
		for(int i=0;i<n-1;i++) cout<<" ";
		for(int i=0;i<x;i++) cout<<"*";
		for(int i=0;i<n-1;i++) cout<<" ";
		cout<<"\n";
		n+=1; x-=2;
	}
}
