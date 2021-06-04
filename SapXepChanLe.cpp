#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin >> n;
	long long a[n];
	vector<long long> le,chan;
	for ( int i = 0; i<n; i++){
		cin >> a[i];
		if(i%2==0) le.push_back(a[i]);
		else chan.push_back(a[i]);
	}
	sort(le.begin(), le.end());
	sort(chan.begin(), chan.end(),greater<long long>());
	if(n%2==0){
		for ( int i = 0 ;i<max(le.size(),chan.size()); i++){
			cout << le[i] << " " << chan[i] << " ";
		}
	}else{
		for ( int i = 0 ;i<min(le.size(),chan.size()); i++){
			cout << le[i] << " " << chan[i] << " ";
		}
		cout << le[le.size()-1];
	}
}
int main(){
		solve();
}
// NV Than



