#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> a){
	sort(a.begin(), a.end());
	for(int i = a.size()-1; i >= 2; --i){
		if(a[i-2] + a[i-1] > a[i]){
			return i+1;
		}
	}
	
	return 0;
}

int main(){
	int n;
	cin>>n;
	
	vector<int> a(n);
	for(int i = 0;i<n; ++i){
		cin>>a[i];
	}
	cout<< solve(a)<<endl;
}
