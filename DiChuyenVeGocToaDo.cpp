#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	long long a[105][105];
	for ( int i = 0; i<=n; i++){
		for ( int j = 0; j<=m; j++){
			a[i][j] = 1;
		}
	}
	for ( int i = 1; i<=n; i++){
		for ( int j = 1; j<=m; j++){
			a[i][j] = a[i-1][j]+ a[i][j-1];
		}
	}
	cout << a[n][m] << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
//NV Than

