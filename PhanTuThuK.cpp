#include<bits/stdc++.h>
using namespace std;



void solve(){
	long long m,n,k;
	cin >> m >> n >> k;
	long long a[m], b[n], c[m+n];
	for ( int i = 0; i<m; i++){
		cin >> a[i];
		c[i]=a[i];
	}
	for ( int i = 0; i<n; i++){
		cin >> b[i];
		c[m+i] = b[i];
	}
	sort(c,c+n+m);
	cout << c[k-1] << endl;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than

