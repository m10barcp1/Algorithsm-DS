#include<bits/stdc++.h>
using namespace std;
int a[505][505],c[505][505],n,m;

int tinh(){
	memset(c,0,sizeof(c));
	c[0][0] = a[0][0];
	for (int i = 1; i<n; i++) c[i][0] = a[i][0]+c[i-1][0];
	for (int i = 1; i<m; i++) c[0][i] = a[0][i]+c[0][i-1];
	
	for (int i = 1; i<n; i++){
		for ( int j = 1; j<m ;j++){
				c[i][j] = min(c[i-1][j-1],min(c[i][j-1],c[i-1][j]))+a[i][j];
		}
	}
	return c[n-1][m-1];
	
	
}

void solve(){
	cin >> n >> m;
	for ( int i = 0; i<n; i++){
		for( int j = 0; j<m; j++){
			cin >> a[i][j];
		}
	}
	cout << tinh() << endl;
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
