#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin >> n >> k;
	int a[n];
	for ( int i = 0; i<n; i++)	cin >> a[i];
	sort(a,a+n);
	long long r = 0, l = 0;
	int x = min(k,n-k);
	for ( int i = 0; i<x; i++) l+=a[i];
	for ( int i = x; i<n; i++) r+=a[i];
	cout << r-l << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


